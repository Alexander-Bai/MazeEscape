note
	description: "Summary description for {ROOM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ROOM

feature -- attributes
	room_id: STRING
	room_type: STRING
	event: ROOM_EVENT

	north_side: ROOM_COMPONENT
	east_side: ROOM_COMPONENT
	south_side: ROOM_COMPONENT
	west_side: ROOM_COMPONENT

	has_visited: BOOLEAN
	is_looted: BOOLEAN
	is_occupied: BOOLEAN

	--roomObjects: LINKED_LIST[ROOM_OBJECT] -- stores a list of components inside the room

feature -- commands
	describe
		deferred
		end

	setComponent(side: INTEGER; component: ROOM_COMPONENT)
		require
			valid_set_comp: 1 <= side and side <= 4 and component /= void
		deferred
		end

	setEvent(e:ROOM_EVENT)
		require
			e_not_void: e /= void
		deferred
		end

	visited
		do
			has_visited:= true
		end

	unvisited
		do
			has_visited:= false
		end

	occupy
		do
			is_occupied:= true
		end

	unoccupy
		do
			is_occupied:= false
		end

	loot
		do
			is_looted:= true
		end

	unloot
		do
			is_looted:= false
		end


end
