note
	description: "PromptTest application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	MAZE_ESCAPE

inherit
	ARGUMENTS

create
	make

feature --attributes
	controller: CONTROLLER
	option: CONTROLLER_ACCESSOR

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			--
		do
			--create a controller
			create option
			controller:= option.the_controller
			controller.loadGame
		end -- make's do end

end-- application end

