note
	description: "Summary description for {MAZE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MAZE

create
	make

feature {MAZE_BUILDER} -- initialization only available to maze builder classes

	make
		require
			true
		do
			create rooms.make
			create iterator.make(rooms)
		end

feature {NONE}-- attributes
	rooms: LINKED_LIST[ROOM] -- maze consists of a list of rooms

feature {CONTROLLER, BASIC_MAZE_BUILDER}
	iterator: LIST_ITERATOR[ROOM]

feature -- methods

exists(id: STRING): BOOLEAN
	require
		id_not_void: id /= void
	do
		if (rooms.is_empty) then
			result:= false
		else
			from rooms.start
			until rooms.item.room_id.is_equal(id) or rooms.after
			loop
				rooms.forth
			end

			if (rooms.after and not rooms.item.room_id.is_equal(id)) then
				result:= false
			else
				result:= true
			end
		end
	ensure
		rooms_exist: rooms.is_empty implies result = false
		rooms_not_exist: result = true implies not rooms.is_empty
	end

getRoom(id: STRING): ROOM
	require
		id_not_void: id /= void and current.exists(id)
	do
		from rooms.start
		until rooms.item.room_id.is_equal(id) or rooms.after
		loop
			rooms.forth
		end

		result:= rooms.item
	ensure
		room_exists: result /= void
	end

getLastRoomId : STRING
	require
		true
	do
		result:= rooms.last.room_id
	ensure
		room_id_not_void: result.is_equal (rooms.last.room_id)
	end

add_room(new_room: ROOM) -- add a new room to the maze
	require
		new_room_not_void: new_room /= void
	do
		rooms.extend(new_room)
	ensure
		Current.exists (new_room.room_id)
	end

remove_room(room_ID: STRING) -- removes a specific room
	require
		room_ID_not_void: room_ID /= void
	do
		from rooms.start
		until rooms.item.room_id.is_equal(room_ID) or rooms.after
		loop
			rooms.forth
		end

		if (rooms.after and not rooms.item.room_id.is_equal(room_ID)) then
			print("Cannot remove a room that does not exist in the maze.%N")
		end

		if (rooms.item.room_id.is_equal(room_ID)) then
			rooms.remove
			print("Room ") print(room_ID) print(" has been removed!%N")
		end
	ensure
		--made for extendability purposes, not actually used in the game.
	end

describe -- print a description of each room in the maze
	require
  		true
 	do
    	print("This maze is made up of the following rooms:%N")
    	from rooms.start
    	until rooms.after
    	loop
     	 print("(") print(rooms.item.room_id) print(") ")
     	 rooms.item.describe
     	 print(" ; ")

    if (rooms.item.has_visited = true) then
      	print("explored; ")
    else
   		print("unexplored; ")
    end

    if (rooms.item.is_occupied = true) then
      	print ("currently in this room")
    end

    	io.put_new_line
    	rooms.forth
   	end
   	ensure
   		rooms_same: rooms.is_equal (old rooms)
  	end

invariant
   valid_maze: rooms /= void
end
