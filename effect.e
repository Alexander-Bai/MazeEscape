note
	description: "Summary description for {EFFECT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	EFFECT

feature -- command
	useOn(object: ANY; source: STRING)
		require
			object_not_void: object /= void
			source_not_void: source /= void
		deferred
		end
end
