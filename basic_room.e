note
	description: "Summary description for {BASIC_ROOM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BASIC_ROOM

inherit
	ROOM

create
	make

feature {NONE} -- initialization
	make(id: STRING)
		require
			id_not_void: id /= void
		do
			room_id:= id
			room_type:= "basic wall"
			create {NORMAL_EVENT} event

			create {BASIC_WALL} north_side.make
			create {BASIC_WALL} east_side.make
			create {BASIC_WALL} south_side.make
			create {BASIC_WALL} west_side.make

			has_Visited:= false
			is_Occupied:= false
		ensure
			room_id_matches: room_id.is_equal (id)
			room_type_matches: room_type.is_equal ("basic wall")
			initialized: has_Visited = false and is_Occupied = false
		end

feature -- commands
	describe -- describes the room
		require else
			true
		do
			print("You are currently in room number ")
			print(room_id)
			print(", which is surrounded by:%N")
			print("N: ") north_side.describe
			print(", E: ") east_side.describe
			print(", S: ") south_side.describe
			print(", W: ") west_side.describe
		end

	setComponent(side: INTEGER; component: ROOM_COMPONENT)
		do
			if side = 1 then north_side := component
			elseif side = 2 then east_side := component
			elseif side = 3 then south_side := component
			else west_side := component
    		end
    	ensure then
    		north_side_set: north_side.is_equal(component) implies side = 1
    		south_side_set: south_side.is_equal(component) implies side = 3
    		east_side_set: east_side.is_equal(component) implies side = 2
    		west_side_set: west_side.is_equal(component) implies side = 4
    	end

    setEvent(e: ROOM_EVENT)
    	do
    		event:= e.twin
    	ensure then
    		event_set: event.is_equal(e)
    	end
end
