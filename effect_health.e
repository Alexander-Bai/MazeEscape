note
	description: "Summary description for {EFFECT_HEALTH}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EFFECT_HEALTH

inherit
	EFFECT

feature -- polymorphic command
	useOn(object: ANY; source: STRING)
		do
			if attached {PLAYER}object as player then
				player.heal(20, source)
			else
				print("Nothing happened.%N")
			end
		ensure then
			--if the target object is player, health should increase by 20.
		end

end
