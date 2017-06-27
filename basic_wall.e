note
	description: "Summary description for {BASIC_WALL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BASIC_WALL

inherit
	ROOM_COMPONENT

create
	make

feature -- initialization
	make
		require
			true
		do
			component_type:= "basic wall"
		ensure
			component_set: component_type.is_equal ("basic wall")
		end

feature -- commands
	describe
		require else
			true
		do
			print("a basic wall")
		end

	tryEnteringFrom(currentRoom: ROOM): ROOM
		do
			print("You've hit a wall%N%N")
			result:= currentRoom
		ensure then
			result_set: result.is_equal(currentRoom)
		end
end
