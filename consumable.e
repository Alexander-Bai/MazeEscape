note
	description: "Summary description for {CONSUMABLE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CONSUMABLE

inherit
	GAME_OBJECT

create
	make

feature {NONE} -- Initialization

	make(s:STRING)
			-- Initialization for `Current'.
		require
			s_not_void: s /= void
		do
			name:= s.twin
			qty:= 1
			if s.is_equal("potion") then
				create {EFFECT_HEALTH} effect
			else
				create {EFFECT_CURE} effect
			end
		ensure
			name_set: name.is_equal (s)
			qty_set: qty = 1
			effect_set: effect /= void
		end

feature -- additional attributes
	effect: EFFECT
end
