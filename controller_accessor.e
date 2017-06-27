note
	description: "Summary description for {CONTROLLER_ACCESSOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CONTROLLER_ACCESSOR

inherit SINGLETON_ACCESSOR
          rename singleton as the_controller end

------------------------------
feature

the_controller : CONTROLLER
    -- Create the only CONTROLLER instance in the system
  once
    create Result.make("Default name","easy")
  end
end
