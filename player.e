note
	description: "Summary description for {PLAYER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAYER

inherit
	OBSERVER

create
	make

feature {NONE} -- Initialization

	make(n: STRING; startingRoom: ROOM)
			-- Initialization for `Current'.
		require
			n_not_void: n /= void
			starting_room_not_void: startingRoom /= void
		do
			name:= n.twin
			start_location:= startingRoom
			location:= startingRoom
			location.visited
			location.occupy
			health:= 100
			max_hp:= 100
			gold:= 100
			status:= "normal"
			create bag.make
		ensure
			name.is_equal (n.twin)
			start_location.is_equal(startingRoom)
			location.is_equal(startingRoom)
			location.has_visited = true
			location.is_occupied = true
		end

feature -- attributes
	name: STRING
	health: INTEGER
	max_hp: INTEGER
	gold: INTEGER
	status: STRING
	location: ROOM -- pointer that points to the current room where the player resides
	start_location: ROOM -- keeps a references of the start of the maze when game is reset
	bag: INVENTORY

feature -- commands
	setStatus(s: STRING)
		require
			s_not_void: s /= void
		do
			status:= s.twin
		ensure
			status_set: status.is_equal (s)
		end

	setName(n: STRING)
		require
			n_not_void: n /= void
		do
			name:= n.twin
		ensure
			name_set: name.is_equal (n)
		end
	-- modified--
	obtain(item: GAME_OBJECT)
		require
			item_not_void: item /= void
		do
			bag.add_item(item)
			print("You have obtained ")
			print(item.qty)
			print(" ")
			print(item.name)
			print("%N")
		ensure
			(old bag).iterator.get_last.name.is_equal(item.name.out)
		end


	cure(source: STRING)
		require
			source_not_void: source /= void
		do
			status:= "normal"
			print("The ")
			print(source)
			print(" has cured you!%N")
		ensure
			status_normal: Current.status.is_equal("normal")
		end

	heal(hp: INTEGER; source: STRING)
		require
			hp_positive: hp > 0
			source_not_void: source /= void
		local
			temp_heal: INTEGER
			previous_health: INTEGER
		do
			temp_heal:= hp
			previous_health:= health
			health:= health + hp
			if health > max_hp then
				temp_heal := max_hp - previous_health
				health:= max_hp
			end
			print(source)
			print(" heals you for ")
			print(temp_heal)
			print(" hp!%N")
		ensure
			health_healed: Current.health = old Current.health + hp or Current.health = 100
		end

	takeDamage(hp: INTEGER; source: STRING)
		require
			hp_positive: hp > 0
			source_not_void: source /= void
		do
			health:= health - hp
			print(source)
			print(" damages you for ")
			print(hp)
			print(" hp%N")
		ensure
			health_damaged: Current.health = old Current.health - hp
		end

	--begin add--
	use(item_name: STRING)
		require
			item_name_not_void: item_name /= void
		local
			item: GAME_OBJECT
		do
			item:= bag.remove_item(item_name)
			if attached {CONSUMABLE}item as consumableitem then
				print("You've used a ")
				print(item.name + ". ")
				consumableitem.effect.useOn(current, item.name)
			end
		ensure
			--if there is 1 quantity of the used item, the bag's quantity should be 0. Otherwise, decrease its quantity by 1.
		end

	setLocation(r: ROOM)
		require
			valid_room:	r /= void
		do
			location:= r
		ensure
			location_set: location.is_equal(r)
		end

	move(dir: INTEGER)
		require
			valid_dir: 1 <= dir and dir <= 4
		local
			new_location: ROOM
			resetEvent: NORMAL_EVENT
		do
			if dir = 1 then
				new_location:= location.north_side.tryEnteringFrom(location)
			elseif dir = 2 then
				new_location:= location.east_side.tryEnteringFrom(location)
			elseif dir = 3 then
				new_location:= location.south_side.tryEnteringFrom(location)
			else
				new_location:= location.west_side.tryEnteringFrom(location)
			end

			if new_location /= location then
				location.unoccupy
				location:= new_location
				location.occupy
			end

			--reset to a room with normal event--
			create resetEvent
			location.setevent(resetEvent)
		ensure
			location_occupied: location.is_occupied = true
		end

	gain_gold (amt: INTEGER)
		require
			positive_amount: amt > 0
		do
			gold:= gold + amt
		ensure
			gold_gained: gold = old gold + amt
		end

	reset
		--required by observers
		require else
			true
		do
			health:= 100
			gold:= 100
			status:= "normal"
			location:= start_location
			from bag.iterator.start
			until bag.iterator.has_next
			loop
				--remove moves the cursor to the next right for us so no need for .forth call
				bag.iterator.remove_current
			end
		ensure then
			location_reset: location.is_equal(start_location)
			--the bag should be empty so there should be no items in the bag
		end

	invariant
		Current.gold >= 100
		Current.start_location.room_id.is_equal ("1")

end
