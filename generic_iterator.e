note
	description: "Summary description for {GAME_ITERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	GENERIC_ITERATOR[G]

feature -- methods

	get_front: G
		deferred
		end

	get_last: G
		deferred
		end

	get_current: G
		deferred
		end

	start
		deferred
		end

	has_next: BOOLEAN
		deferred
		end

	next_item
		deferred
		end

	remove_current
		deferred
		end
end
