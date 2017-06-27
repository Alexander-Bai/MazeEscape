note
	description: "Summary description for {NORMAL_EVENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NORMAL_EVENT

inherit
	ROOM_EVENT

feature
	encounter(p: PLAYER)
		do
			if(p.status.is_equal("poison")) then
				print("You are still suffering from poison.%N")
				p.takedamage(10, "poison")
			elseif (p.status.is_equal("bleeding")) then
				print("You are still bleeding.%N")
				p.takedamage(5, "bleeding")
			else
				--do nothing
			end
		ensure then
			player_normal: old p.status.is_equal("normal") implies
					 	p.health = old p.health

			player_poison: old p.status.is_equal("poison") implies
						p.health = old p.health - 10

			player_bleeding: old p.status.is_equal("bleeding") implies
						p.health = old p.health - 5
		end
end
