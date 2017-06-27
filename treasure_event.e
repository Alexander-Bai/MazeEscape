note
	description: "Summary description for {TREASURE_EVENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TREASURE_EVENT

inherit
	ROOM_EVENT

feature
	encounter(p: PLAYER)
		local
			item: GAME_OBJECT
			reply: STRING
			dice: DICE
			diceVal: INTEGER
			i: INTEGER
		do
			--initialize local dice--
			create dice.make

			if(p.status.is_equal("poison")) then
				print("You are still suffering from poison.%N")
				p.takedamage(10, "poison")
			elseif (p.status.is_equal("bleeding")) then
				print("You are still bleeding.%N")
				p.takedamage(5, "bleeding")
			else
				--do nothing
			end

			print("You have discovered a treasure chest, but it could be booby trapped!%N")
			print("Are you willing to take the risk to open it? yes/no: ")

			-- user prompt --
			io.read_line
			reply:= io.last_string.twin
			io.put_new_line

			-- reward player --
			from i := 0
			until i = 1
			loop
				if (reply.is_equal("yes")) then

					--randomize reward--
					diceVal:= dice.rngroll(4)
					if (diceVal = 0) then
						create {CONSUMABLE} item.make("bandage")
					elseif (diceVal = 0) then
						create {CONSUMABLE} item.make("antidote")
					else
						create {CONSUMABLE} item.make("potion")
					end
					p.gain_gold(50)
					print("You gained 50 gold!%N")
					p.obtain(item)
					io.put_new_line
				elseif (reply.is_equal ("no")) then
				--do nothing
				else
					i:=i-1
					print("Invalid input. Please type 'yes' or 'no': ")
					io.read_line
					reply := io.last_string.twin
					io.put_new_line
				end
				i := i + 1
			end
		ensure then
			player_normal: old p.status.is_equal("normal") implies
					 	p.health = old p.health

			player_poison: old p.status.is_equal("poison") implies
						p.health = old p.health - 10

			player_bleeding: old p.status.is_equal("bleeding") implies
						p.health = old p.health - 5
			gold_set: p.gold = old p.gold or p.gold = old p.gold + 50
		end
end
