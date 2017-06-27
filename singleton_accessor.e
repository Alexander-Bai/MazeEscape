note
  description: "Specification of the abstract properties of the global %
   				% access point to a Singleton"

deferred class SINGLETON_ACCESSOR

------------------------------
feature {NONE}

singleton : SINGLETON deferred end
  -- Access to a unique instance.
  -- Should be redefined as a once function in concrete subclasses

is_real_singleton : BOOLEAN
  -- Do multiple calls to `singleton' return the same result?
  do
    Result := singleton = singleton
  end

invariant
  singleton_is_real_singleton: is_real_singleton

end
