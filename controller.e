note
	description: "Summary description for {CONTROLLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CONTROLLER

inherit
    SINGLETON
    SUBJECT

create {CONTROLLER_ACCESSOR} make

--------------------------------------------------------------------------------
feature -- The controller's method for returning the singleton

the_singleton: CONTROLLER
  once
    result := current
  end

feature -- initialization

make(n: STRING; m: STRING)
 	require
 		string_not_void: m /= void; n /= void
 	do
 		mode := m.twin
		game := initializeMaze(mode)
		finish_room := "0"
		create dice.make
    	create player.make(n, game.maze.getroom("1"))
    	create observer_list.make
    	Current.register(game)
    	Current.register(player)
    ensure
    	mode_string_copied: mode.is_equal(m)
    	player_name_copied: n.is_equal(player.name)
    	game_room_set: game.maze.getroom("1").room_id.is_equal("1")
  	end


feature -- attributes
	player: PLAYER
	mode: STRING
	game: MAZE_BUILDER
	dice: DICE
	finish_room: STRING
	observer_list: LINKED_LIST[OBSERVER]

loadGame
	require
		true
	local
		input: STRING
		inputInt: INTEGER
		stop: BOOLEAN
		difficulty: STRING
		userName: STRING
		i: INTEGER
	do
		--default values
		input:= ""
		inputInt:= 0

		--prompt user for name and difficulty used to create a new game
		print ("Please enter player name: ")
		io.read_line
		userName:= io.last_string.twin
		io.put_new_line

		print ("Please enter difficulty (easy, medium or hard): ")
		io.read_line
		difficulty:= io.last_string.twin
		io.put_new_line
		from i:= 0
		until i= 1
		loop
			if not (difficulty.is_equal("easy") or difficulty.is_equal("medium") or difficulty.is_equal("hard")) then
				i := i - 1
				print("Invalid input. Please type 'easy', 'medium', or 'hard': ")
				io.read_line
				difficulty:= io.last_string.twin
				io.put_new_line
			end
			i:= i + 1
		end

		--set player name and game mode
		Current.set_name(userName)
		Current.set_mode(difficulty)

		--setting difficulty which also builds the maze
		if difficulty.is_equal("easy") then
			Current.easy
		elseif difficulty.is_equal("medium") then
			Current.medium
		elseif difficulty.is_equal("hard") then
			Current.hard
		end

		-- intro --
		print("%NMaze Escape has started! Try to escape the maze while collecting as much gold as you can!%N")
		Current.player.location.describe
		print("%NYou currently have hp: " + Current.player.health.out + "/" + Current.player.max_hp.out+ " and " +
			Current.player.gold.out + " gold.")
		io.put_new_line

		--main loop for command prompt
		from stop:= false
		until stop = true
			  or Current.player.status.is_equal("dead")
			  or Current.player.status.is_equal("finished")
		loop
			--check player status first--

			--prompt user command--
			print("%NWhat would you like to do? ")
			print("examine room, move, open door, check inv, use, reset:%N")
			io.read_line
			input:= io.last_string

			--exit--
			if(input.is_equal("exit")) then
				io.put_new_line
				print("Exiting now...%N")
				Current.player.setstatus ("finished")
				stop:= true

			--examine--
			elseif (input.is_equal("examine room")) then
				io.put_new_line
				Current.player.location.describe
				if dice.rngroll(10) >= 6 and Current.player.location.is_looted = false then
					print("%NYou got 10 gold!")
					Current.player.gain_gold(10)
					Current.player.location.loot
				end
				io.put_new_line

			--move--
			elseif (input.is_equal("move")) then
				io.put_new_line
				print("North = n, East = e, South = s, West = w%N")
				print("Where do you want to move? ")
				io.read_line
				input:= io.last_string
				io.put_new_line

				inputInt:= Current.direction(input)
				if(inputInt = 1 or inputInt = 2 or inputInt = 3 or inputInt = 4) then
					Current.moveto(inputInt)
					if Current.player.location.room_id.is_equal (finish_room) then
						print("Congratulations " + username + "! You beat the game in " + difficulty + " mode with " +
							Current.player.gold.out + " gold!%N")
						print("Maze Escape will now exit!%N")
						stop:= true
					end
				else
					print("No such direction exists.%N")
				end

			--open door--
			elseif (input.is_equal("open door")) then
				io.put_new_line
				print("North = n, East = e, South = s, West = w%N")
				print("Which door to open? ")
				io.read_line
				input:= io.last_string
				io.put_new_line

				inputInt:= Current.direction(input)
				if(inputInt = 1 or inputInt = 2 or inputInt = 3 or inputInt = 4) then
					Current.openDoor(inputInt)
				else
					print("No such door exists.%N")
				end

			--check inventory--
			elseif (input.is_equal("check inv")) then
				io.put_new_line
				Current.player.bag.print_all

			--use inventory--
			elseif (input.is_equal("use")) then
				io.put_new_line
				Current.player.bag.print_all
				if not Current.player.bag.container.is_empty then
					print("What do you want to use from your inventory? ")
					io.read_line
					input:= io.last_string
					io.put_new_line

					if Current.player.bag.get_index(input) = -1 then
						print("No such item exist in your inventory.")
					else
						Current.player.use(input)
					end
				end
			--reset current game--
			elseif (input.is_equal("reset")) then
				io.put_new_line
				current.reset_game
				Current.player.location.describe

			--invalid command--
			else
				print("Nothing happened.%N")
			end -- else-if end

			current.check_player_status
			if Current.player.status.is_equal ("dead") then
				print("You have died! Maze Escape will now exit! Goodbye.%N")
			end

		end -- main loop end
	ensure
		successful_exit: Current.player.status.is_equal ("finished") or Current.player.status.is_equal ("dead") or
						Current.player.location.room_id.is_equal (finish_room)
	end -- make's do end

check_player_status
	require
		true
	do
		if (Current.player.health <= 0) then
			Current.player.setstatus ("dead")
		end
	ensure
		status_not_void: Current.player.status /= void
	end

initializeMaze(m: STRING): MAZE_BUILDER -- helper method for make method
	require
		maze_set: m.is_equal("easy") or m.is_equal("medium") or m.is_equal("hard")
	local
		tempGame: MAZE_BUILDER
	do
		--if (m.is_equal("easy")) then
			create {BASIC_MAZE_BUILDER} tempGame.build_maze
			tempGame.build_room("1")
			result:= tempGame
		--end
	ensure
		result_not_void: result /= void
	end

feature -- commands
set_mode(n: STRING)
	require
		mode_set: n.is_equal("easy") or n.is_equal("medium") or n.is_equal("hard")
	do
		mode:= n.twin
	ensure
		mode_is_equal: mode.is_equal (n)
	end

set_name(n: STRING)
	require
		not_void: n /= void
	do
		player.setName(n)
	ensure
		player_name_equal: player.name.is_equal (n)
	end

direction(d: STRING):INTEGER
	-- translates or looks up the integer value for that direction
	require
		not_void: d /= void
	do
		if(d.is_equal("n") or d.is_equal("north")) then
			result:= 1
		elseif (d.is_equal("e") or d.is_equal("east")) then
			result:= 2
		elseif (d.is_equal("s") or d.is_equal("south")) then
			result:= 3
		elseif (d.is_equal("w") or d.is_equal("west")) then
			result:= 4
		else
			result:= 0
		end
	ensure
		result_range: result <= 4 or result >= 0
	end

easy
--change game mode to easy
	require
		true
	do
		--code to set the game to easy mode
		print("Game mode set to easy!%N")

		-- create 9 rooms (3x3)
		-- room 1 = start, room 9 = finish room
		-- o = door
		-- | = wall
		--		-------------
		--		| 7	o 8	o 9	|
		--		--o----------
		--		| 4	| 5	o 6	|
		--		--o-------o--
		--		| 1	o 2	o 3	|
		--		-------------

		-- room "1" already exist
		game.build_room ("2")
		game.build_room ("3")
		game.build_room ("4")
		game.build_room ("5")
		game.build_room ("6")
		game.build_room ("7")
		game.build_room ("8")
		game.build_room ("9")

		-- connecting rooms with doors
		game.connect_room ("1", "2", 2, 4)
		game.connect_room ("1", "4", 1, 3)
		game.connect_room ("2", "3", 2, 4)
		game.connect_room ("3", "6", 1, 3)
		game.connect_room ("6", "5", 4, 2)
		game.connect_room ("4", "7", 1, 3)
		game.connect_room ("7", "8", 2, 4)
		game.connect_room ("8", "9", 2, 4)

		--set the finish room (added)
		finish_room:= "9"

		player.setlocation(game.maze.getroom("1"))
		print("%N")
		print("Game has started!")
		print("%N")
	ensure
		maze_built: game.maze.iterator.get_last.room_id.is_equal("9")
	end

medium
--change game mode to medium
	require
		true
	do
--code to set the game to easy mode
		print("Game mode set to medium!%N")

		-- create 9 rooms (3x3)
		-- room 1 = start, room 9 = finish room
		-- o = door
		-- | = wall
		--		-------------
		--		| 7	o 8	o 9	|
		--		--o----------
		--		| 4	| 5	o 6	|
		--		--o-------o--
		--		| 1	o 2	o 3	|
		--		-------------

		-- room "1" already exist
		game.build_room ("2")
		game.build_room ("3")
		game.build_room ("4")
		game.build_room ("5")
		game.build_room ("6")
		game.build_room ("7")
		game.build_room ("8")
		game.build_room ("9")

		-- connecting rooms with doors
		game.connect_room ("1", "2", 2, 4)
		game.connect_room ("1", "4", 1, 3)
		game.connect_room ("2", "3", 2, 4)
		game.connect_room ("3", "6", 1, 3)
		game.connect_room ("6", "5", 4, 2)
		game.connect_room ("4", "7", 1, 3)
		game.connect_room ("7", "8", 2, 4)
		game.connect_room ("8", "9", 2, 4)
		game.connect_room ("6", "9", 1, 3)

		--set the finish room (added)
		finish_room:= "5"

		player.setlocation(game.maze.getroom("1"))
		print("%N")
		print("Game has started!")
		print("%N")
	ensure
		maze_built: game.maze.getlastroomid.is_equal ("9")
	end

hard
--change game mode to hard
	require
		true
	do
--code to set the game to easy mode
		print("Game mode set to hard!%N")

		-- create 16 rooms (4x4)
		-- room 1 = start, room 9 = finish room
		-- o = door
		-- | = wall
		--		-----------------
		--		|13 o14 o15 o 16|	
		--		--o-----------o--
		--		| 9	o10	o11 o 12|
		--		--o-----------o--
		--		| 5	| 6	o 7	o 8 |
		--		------o---o---o--
		--		| 1	o 2	o 3	o 4 |
		--		-----------------
		-- room "1" already exist
		game.build_room ("2")
		game.build_room ("3")
		game.build_room ("4")
		game.build_room ("5")
		game.build_room ("6")
		game.build_room ("7")
		game.build_room ("8")
		game.build_room ("9")
		game.build_room ("10")
		game.build_room ("11")
		game.build_room ("12")
		game.build_room ("13")
		game.build_room ("14")
		game.build_room ("15")
		game.build_room ("16")

		-- connecting rooms with doors
		game.connect_room ("1", "2", 2, 4)
		game.connect_room ("2", "3", 2, 4)
		game.connect_room ("2", "6", 1, 3)
		game.connect_room ("3", "4", 2, 4)
		game.connect_room ("4", "8", 1, 3)
		game.connect_room ("5", "9", 1, 3)
		game.connect_room ("6", "10", 1, 3)
		game.connect_room ("7", "8", 2, 4)
		game.connect_room ("8", "12", 1, 3)
		game.connect_room ("9", "10", 2, 4)
		game.connect_room ("9", "13", 1, 3)
		game.connect_room ("11", "12", 2, 4)
		game.connect_room ("13", "14", 2, 4)
		game.connect_room ("14", "15", 2, 4)
		game.connect_room ("15", "16", 2, 4)


		--set the finish room (added)
		finish_room:= "11"

		player.setlocation(game.maze.getroom("1"))
		print("%N")
		print("Game has started!")
		print("%N")
	ensure
		maze_built: game.maze.getlastroomid.is_equal ("16")
	end

reset_game
--reset the current game mode
	require
		true
	do
		--code to reset the game
		from observer_list.start
		until observer_list.after
		loop
			observer_list.item.reset
			observer_list.forth
		end
		print("The current " + mode + " maze has been reset!%N")
	end

--player actions--
moveTo(dir: INTEGER)
	require
		dir_is_positive: dir >= 0
	local
		random_event: ROOM_EVENT
	do
		if (dir = 1 or dir = 2 or dir = 3 or dir = 4) then
			player.move(dir)
			if not player.location.room_id.is_equal(finish_room) then
				if not player.location.has_visited then
					print("You've entered a new room!%N")
					player.location.visited
					--random room event occurs
					random_event:= roomEvent
					player.location.setEvent(random_event)
					player.location.event.encounter(player)
				else
					-- previously set room events can still happen if user backtracks --
					player.location.event.encounter(player)
				end

				if(not player.status.is_equal("dead")) then
					player.location.describe
					print("%NYou currently have hp: " + player.health.out + "/" + player.max_hp.out + " and " +
						player.gold.out + " gold.")
					io.put_new_line
				end
			end
		else
			print("Invalid move...%N")
		end
	ensure
		player_moved: not old player.location.room_id.is_equal(player.location.room_id) implies
					 (dir = 1 or dir = 2 or dir = 3 or dir = 4)

		player_not_moved: not (dir = 1 or dir = 2 or dir = 3 or dir = 4) implies
						old player.location.room_id.is_equal(player.location.room_id)
	end

--random room event generator upon entering new room--
roomEvent: ROOM_EVENT
--rolls for the state of the room depending on the difficulty
	require
		true
	local
		randomEvent:ROOM_EVENT
		room_roll: INTEGER
	do
		room_roll:= dice.rngroll(10)
		--easy mode's random event probability--
		if mode.is_equal("easy") then
			if room_roll <= 2 then
				create {POISON_EVENT} randomEvent
			elseif room_roll <= 7 then
				create {NORMAL_EVENT} randomEvent
			elseif room_roll <= 9 then
				create {TREASURE_EVENT} randomEvent
			else
				create {TRAP_EVENT} randomEvent
			end

		--hard mode's random event probability--
		elseif mode.is_equal("medium") then
			if room_roll <= 4 then
				create {POISON_EVENT} randomEvent
			elseif room_roll <= 7 then
				create {NORMAL_EVENT} randomEvent
			elseif room_roll <= 9 then
				create {TREASURE_EVENT} randomEvent
			else
				create {TRAP_EVENT} randomEvent
			end
		--hard mode's random event probability--
		else
			if room_roll <= 3 then
				create {POISON_EVENT} randomEvent
			elseif room_roll <= 6 then
				create {NORMAL_EVENT} randomEvent
			elseif room_roll = 7 then
				create {TREASURE_EVENT} randomEvent
			else
				create {TRAP_EVENT} randomEvent
			end
		end

		result:= randomEvent
	ensure
		not_void: result /= void
	end

openDoor(door: INTEGER)
	require
		valid_door: 1 <= door and door <= 4
	do
		--north door--
		if(door = 1) then
			if player.location.north_side.component_type.is_equal("door") and
			attached {DOOR}player.location.north_side as d then
				d.open
				print("The door is opened now.%N")
			else
				print("Cannot open non-door.%N")
			end

		--east door--
		elseif (door = 2) then
			if player.location.east_side.component_type.is_equal("door") and
			attached {DOOR}player.location.east_side as d then
				d.open
				print("The door is opened now.%N")
			else
				print("Cannot open non-door.%N")
			end

		--south door--
		elseif (door = 3) then
			if player.location.south_side.component_type.is_equal("door") and
			attached {DOOR}player.location.south_side as d then
				d.open
				print("The door is opened now.%N")
			else
				print("Cannot open non-door.%N")
			end

		--west door--
		elseif (door = 4) then
			if player.location.west_side.component_type.is_equal("door") and
			attached {DOOR}player.location.west_side as d then
				d.open
				print("The door is opened now.%N")
			else
				print("Cannot open non-door.%N")
			end
		end
	ensure
		--the room component (door) for the opened door should be true, while old room component (door) should be true.
	end -- end of openDoor

register(o: OBSERVER)
	do
		observer_list.extend(o)
	ensure then
		not observer_list.is_equal (old observer_list)
	end

unregister(o: OBSERVER)
	local
		removed: BOOLEAN
	do
		removed:= false
		from observer_list.start
		until removed = true or observer_list.after
		loop
			if observer_list.item = o then
				observer_list.remove
				removed:= true
			end
			observer_list.forth
		end
	ensure then
		not observer_list.is_equal (old observer_list)
	end

update_observer
	do
		Current.reset_game
	end

invariant
	valid_controller: player /= void

end -- end of controller
