note
	description: "Summary description for {INVENTORY}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INVENTORY

create
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		require
			true
		do
			create container.make
			create iterator.make(container)
		end

feature {CONTROLLER} -- private attributes
	container: LINKED_LIST[GAME_OBJECT]

feature {PLAYER} -- exported attributes
	iterator: LIST_ITERATOR[GAME_OBJECT]


feature -- public methods

	get_index(target: STRING):INTEGER
		require
			target_not_void: target /= void
		local
			index: INTEGER
		do
			index:= -1
			if container.is_empty then
				index:= -1
			else
				from container.start
				until container.after
				loop
					if container.item.name.is_equal(target) then
						index:= container.index
					end
					container.forth
				end
			end

			result:= index
		ensure
			index_retrieved: container.is_empty implies result = -1
			index_not_retrieved: result /= -1 implies not container.is_empty
		end

	remove_item(target: STRING): GAME_OBJECT
		require
			target_not_void: target /= void
			current.get_index(target) >= 1
		local
			returnitem: GAME_OBJECT
		do
			from container.start
			until container.item.name.is_equal(target)
			loop
				container.forth
			end

			-- decrease qty by 1--
			container.item.reduce_qty
			returnitem:= container.item.deep_twin

			if container.item.qty <= 0 then
				container.remove
			end

			result:= returnitem
		ensure
			removed_item: result /= void
			--if the quantity of an item is 1 or more, check if the item has 1 less of its quantity in the inventory.
			--if the quantity of an item is 0, then check if the item has been removed from the inventory.
		end

	add_item(newitem: GAME_OBJECT)
		require
			newitem_not_void: newitem /= void
		local
			index: INTEGER
			temp: GAME_OBJECT
		do
			index:= current.get_index(newitem.name)

			if index >= 1 then -- if item exists already
				container.go_i_th(index)
				container.item.increase_qty --increase item qty
			else
				temp:= newitem.deep_twin
				container.extend(temp) --else just place new item
			end
		ensure
			item_added: current.get_index (newitem.name) > 0
		end

	print_all
		require
			true
		do
			if container.is_empty then
				print("You have nothing in your bag.%N")
			else
				print("==============INVENTORY LIST===============%N")
				from container.start
				until container.after
				loop
					print("(") print(container.index) print(") ")
					print(container.item.name) print(" x ") print(container.item.qty)
					io.put_new_line
					container.forth
				end
					print("===========================================%N")
			end
		ensure
			container_printed: container.is_equal (old container)
		end

	invariant
		--if the inventory does not exist, the quantity of each type of object in the inventory should not change if the user attempts to use an item.

end
