note
   description: "Specification of the abstract properties of a Singleton"

deferred class SINGLETON

------------------------------
feature {NONE}

the_singleton : SINGLETON deferred end
  -- The unique instance of this class.
  -- Should be redefined as a once function returning Current
  -- in concrete subclasses.

invariant
  only_one_instance:  Current = the_singleton

end
