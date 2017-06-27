note
	description: "Summary description for {ROOM_EVENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ROOM_EVENT

feature -- command

	encounter(p: PLAYER) -- polymorphic encounter
		require
			p_not_void: p /= void
		deferred
		end
end
