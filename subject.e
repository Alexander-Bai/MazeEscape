note
	description: "Summary description for {SUBJECT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SUBJECT

feature -- attribute
	observer_list: LINKED_LIST[OBSERVER] deferred end

feature -- commands
	register(o: observer)
		require
			o_not_void: o /= void
		deferred
		end

    unregister(o: observer)
    	require
    		o_not_void: o /= void
    	deferred
    	end

    update_observer
    	require
    		true
    	deferred
    	end
end
