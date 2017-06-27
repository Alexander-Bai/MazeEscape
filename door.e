note
	description: "Summary description for {DOOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DOOR

inherit
	ROOM_COMPONENT

create
	make

feature {NONE} -- Initialization

	make(r1: ROOM; r2: ROOM)
			-- Initialization for `Current'.
		do
			component_type:= "door"
			room1:= r1
			room2:= r2
			opened:= false
		end

feature -- attributes
room1: ROOM
room2: ROOM
opened: BOOLEAN

feature -- commands
	describe
		require else
			true
		do
			if(opened = false) then
				print("a door")
			else
				print("a door that connects room ")
				print(room1.room_id)
				print(" with ")
				print(room2.room_id)
			end
		end

	shut
		require
			true
		do
			opened:= false
		ensure
			opened_false: opened = false
		end

	open
		require
			true
		do
			if (opened = true) then
				print("The door is already opened.%N%N")
			else
				opened:= true
			end
		ensure
			opened_true: opened = true
		end

	tryEnteringFrom(currentRoom: ROOM): ROOM
		do
			if (opened = false) then
				print("Try opening the door first.%N%N")
				result:= currentRoom
			else
				result:= other_side_from (currentRoom)
			end
		ensure then
			result /= void
		end

	other_side_from (room: ROOM) : ROOM
	  require
	  	adjacent_room: room = room1 or room = room2
	  do
	    if (room = room1) then
	    	result := room2
		else
			result := room1
		end
	  ensure
	 	result_set: result.is_equal(room1) or result.is_equal(room2)
	  end

end
