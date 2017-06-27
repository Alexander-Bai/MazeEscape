note
	description: "Summary description for {POISON_EVENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	POISON_EVENT

inherit
	ROOM_EVENT

feature
	encounter(p: PLAYER)
		do
			if(p.status.is_equal("poison")) then
				print("You are still suffering from poison.%N")
				p.takedamage(10, "poison")
			elseif (p.status.is_equal("bleeding")) then
				print("You took 10 damage from poison but you are not poisoned%N")
				p.takedamage (10, "poison")
				print("You are still bleeding.%N")
				p.takedamage(5, "bleeding")
			else
				p.setstatus("poison")
				print("You have been poisoned by the gas in this room!%N%N")
			end
		ensure then
			player_normal: old p.status.is_equal("normal") implies
					 	p.status.is_equal ("poison")

			player_poison: old p.status.is_equal("poison") implies
						p.health = old p.health - 10

			player_bleeding: old p.status.is_equal("bleeding") implies
						p.health = old p.health - 15
		end
end
