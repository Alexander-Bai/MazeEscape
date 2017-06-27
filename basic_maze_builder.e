note
	description: "Summary description for {EASY_MAZE_BUILDER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BASIC_MAZE_BUILDER

inherit
	MAZE_BUILDER

create
	build_maze

feature -- attributes
	maze: MAZE

feature -- commands
	build_maze -- initializes a maze using only basic_room, basic_wall
		do
			create maze.make
		end

	build_room(room_id: STRING) -- builds a room with 4 basic walls and adds it to the maze
		local
			new_room: BASIC_ROOM
		do
			create new_room.make(room_id)
			maze.add_room(new_room)
		ensure then
			room_exists: maze.exists(room_id)
		end

	connect_room(r1_id: STRING; r2_id: STRING; pos1: INTEGER; pos2: INTEGER)
		local
			r1: ROOM
			r2: ROOM
			door: DOOR
		do
			r1:= maze.getroom (r1_id)
			r2:= maze.getroom (r2_id)
			create door.make(r1, r2) -- need to place this in observer
			r1.setcomponent (pos1, door)
			r2.setcomponent (pos2, door)
		ensure then
			--there should be exactly one door that is common to both rooms
		end

	reset
		--reset all the rooms
		local
			default_event: NORMAL_EVENT
		do
			create {NORMAL_EVENT} default_event
			from maze.iterator.start
			until maze.iterator.has_next
			loop
				maze.iterator.get_current.unvisited
				maze.iterator.get_current.unoccupy
				maze.iterator.get_current.unloot
				maze.iterator.get_current.setevent(default_event)

				if attached {DOOR} maze.iterator.get_current.north_side as north_door then
					north_door.shut
				end

				if attached {DOOR} maze.iterator.get_current.east_side as east_door then
					east_door.shut
				end

				if attached {DOOR} maze.iterator.get_current.south_side as south_door then
					south_door.shut
				end

				if attached {DOOR} maze.iterator.get_current.west_side as west_door then
					west_door.shut
				end

				maze.iterator.next_item
			end
		ensure then
			--all doors in each room should be shut
		end
end
