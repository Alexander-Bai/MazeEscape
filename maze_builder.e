note
	description: "Summary description for {MAZE_BUILDER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	MAZE_BUILDER

inherit
	OBSERVER

feature -- attributes
	maze: MAZE -- the main maze to be built
	deferred
end

feature -- commands
	build_maze
		require
			true
		deferred
		end

	build_room(room_id: STRING)
		require
			room_id_not_void: room_id /= void
			no_duplicate_room: not maze.exists(room_id) -- must not exist already
		deferred
		ensure
			valid_room: maze.getRoom(room_id) /= void
		end

	connect_room(r1_id: STRING; r2_id: STRING; pos1: INTEGER; pos2: INTEGER)
		require
			rooms_exist: maze.exists (r1_id) and maze.exists (r2_id)
			valid_position1: 1 <= pos1 and pos1 <=4
			valid_position2: 1 <= pos2 and pos2 <=4
		deferred
		end

	reset
		deferred
		end
end
