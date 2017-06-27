note
	description: "Summary description for {TRAP_EVENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAP_EVENT

inherit
	ROOM_EVENT

feature
	encounter(p: PLAYER)
		local
			reply: STRING
			dice: DICE
			i: INTEGER
			max_damage: DOUBLE
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

			if p.health > 0 then
				print("You have discovered a treasure chest, but it could be booby trapped!%N")
				print("Are you willing to take the risk to open it? yes/no: ")

				-- user prompt --
				io.read_line
				reply:= io.last_string.twin
				io.put_new_line

				-- punish player--
				max_damage:= p.health/2 -- max damage that player can take is half of is current hp
				from i := 0
				until i = 1
				loop
					if (reply.is_equal("yes")) then
						p.takedamage(dice.rngroll(max_damage.floor), "shrapnel trap")
						if not p.status.is_equal("poison") then
							p.setstatus ("bleeding")
							print("You are now bleeding!%N")
						end
					elseif reply.is_equal("no") then
						--do nothing
					else
						print("Invalid input, please type 'yes' or 'no': ")
						io.read_line
						reply := io.last_string.twin
						io.put_new_line
						i:= i - 1
					end
					if (p.health <= 0) then
						p.setstatus ("dead")
					end
					i := i + 1
				end
			else
				p.setstatus ("dead")
			end
		ensure then
			p.status /= void
			--if reply was yes, then decrememnt hp by the random damage roll. If no, the hp is the same.
			--unable to access local variables and random damage rolls.
		end
	end
