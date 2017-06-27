note
	description: "Summary description for {EFFECT_CURE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EFFECT_CURE

inherit
	EFFECT

feature -- polymorphic command
	useOn(object: ANY; source: STRING)
		do
			if attached {PLAYER}object as player then
				if player.status.is_equal("poison") and source.is_equal("antidote") then
					player.cure(source)
				elseif player.status.is_equal("bleeding") and source.is_equal("bandage") then
					player.cure(source)
				else
					print("You've wasted 1 ")
					print(source)
					print(".%N")
				end

			else
				print("Nothing happened.%N")
			end
		ensure then
			--if the target object is player and the conditions are met, then set player status to normal.
		end

end
