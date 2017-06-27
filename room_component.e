note
	description: "Summary description for {ROOM_COMPONENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ROOM_COMPONENT

feature -- attributes
	component_type: STRING

feature -- commands
	describe
		deferred
		end

	tryEnteringFrom(currentRoom: ROOM): ROOM
		require
			current_room_not_void: currentRoom /= void
		deferred
		end
end
