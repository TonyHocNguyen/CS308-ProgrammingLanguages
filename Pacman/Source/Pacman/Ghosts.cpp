// This project is based on a tutorial from Awesome Tuts with some modifications of my own.
// I do not own the visual blueprints used as a starter content for the game.


#include "Ghosts.h"

// This function is adapted from the tutorial
// Change the object state in the blueprint
void AGhosts::Hunt()
{
	State = EGhostState::Default;
	StateChangedEvent.Broadcast(State);
}

// This function is adapted from the tutorial
// Change the object state in the blueprint
void AGhosts::Stop()
{
	State = EGhostState::Stop;
	StateChangedEvent.Broadcast(State);
}
