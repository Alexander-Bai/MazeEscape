note
	description: "Summary description for {LIST_ITERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LIST_ITERATOR[G]

inherit
	GENERIC_ITERATOR[G]

create
	make

feature {NONE} -- Initialization

	make(the_list: LINKED_LIST[G])
		require
			the_list_not_void: the_list /= void
		do
			container:= the_list
		ensure
			list_set: container.is_equal (the_list)
		end

feature {NONE} -- attributes
	container: LINKED_LIST[G]

feature -- methods
	get_front: G
		do
			result:= container.first
		end

	get_last: G
		do
			result:= container.last
		end

	get_current: G
		do
			result:= container.item
		end

	start
		do
			container.start
		end

	has_next: BOOLEAN
		do
			result:= container.after
		end

	next_item
		do
			container.forth
		end

	remove_current
		do
			container.remove
		end

end
