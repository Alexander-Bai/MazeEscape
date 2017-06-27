# MazeEscape
Open maze escape.ecf on EiffelStudio to run the game.

The ‘Maze Escape’ game’s main purpose is for the player to escape the maze with the highest amount of gold. There is only one room that allows the player to escape the maze to complete the game. A player can pick up gold and items from different rooms. Every time a player enters a room that is ‘unexplored’, an event may occur. The following possible events are:
- treasure chest event
- booby trapped chest event
- poison event

Each time a player enters a room, the player will be given the description of all four sides of the room, whether it may be a door or a wall for each side. The player will be required to open a door before he can move to the next room. There is a tracker that keeps of the player’s gold every time a player picks up an item, and another counter that keeps track of the player’s health, which has to be kept positive in order to stay alive. If the player’s health hits 0, the game is over and the final gold count will be printed along with the player name. The player will have an inventory (bag) that holds items such as consumable items. If a player uses a consumable that is meant to heal poison status, but the player is not poisoned, then the item will be wasted.
