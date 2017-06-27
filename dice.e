note
	description: "Summary description for {DICE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DICE

create
	make

feature -- initialization
	make
	require
		true
	do
		value := rng.item
	end

feature --attribute
	value: INTEGER

feature --randomizer

rngRoll(max: INTEGER):INTEGER
  -- sets randomNum to a random number between 1 and max
	require
		max_greater_than_zero: max > 0
	do
		current.reroll
		value:= (value \\ max) + 1
		result:= value
	ensure
		result_set: result = value
	end

reroll
	-- helper method for rngRoll
	require
		true
	do
		value := rng.item
	end

rng: RANDOM
	require
		true
	local
		time: DATE_TIME
	do
		create time.make_now_utc
		create Result.set_seed (time.seconds * 1000 + time.time.milli_second)
		Result.start
	end
end
