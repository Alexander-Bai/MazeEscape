note
	description: "Summary description for {GAME_OBJECT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	GAME_OBJECT

feature -- attributes
	name: STRING
	qty: INTEGER

feature -- commands
	reduce_qty
		require
			true
		do
			qty:= qty - 1
		ensure
			qty_reduced: qty < old qty
		end

	increase_qty
		require
			true
		do
			qty:= qty + 1
		ensure
			qty_increased: qty > old qty
		end

end
