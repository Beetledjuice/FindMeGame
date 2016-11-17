#pragma once

#include "FFindMe.h"
#include <map>


// game rooms
void FFindMeGame::WhereIsPlayer() // TODO write a code to get a random option (maybe from a map?)
{
	//right01 - wet - cave more distant from objective
		// subtract 1 from Proximity
	std::cout << "You feel the air around you starting to weight with umidity.\n";
	std::cout << "You feel your feet sinking in cold mud and\n";
	std::cout << "my warmth growing distant.\n";
	//right02 - lake - same distance from objective than previous room
		// add 0 to Proximity
	std::cout << "You stumble upon water. Deep and cold. A lake perhaps?\n";
	std::cout << "You can barely see where it begins. My warmth sit still where it was before.\n";
	//right03 - stairs down - geting closer to objetive
		// add 1 to Proximity
	std::cout << "You come across a starwell leading down. The silence around you\n";
	std::cout << "is oppressive. The only thing you can hear is your own steps.\n";
	std::cout << "You can feel my warmth trying to reach you. Come closer.\n";

	//left01 - hall - same distance from objetive than previous room
		// add 0 to Proximity
	std::cout << "You start to hear your steps echoing. You've reached a big room\n";
	std::cout << "where the ceiling is sustained by great pilars. You feel no diference\n";
	std::cout << "in relation to my warmth. Try harder, find me.\n";
	//left02 - stairs up - getting more distant from objetive
		// subtract 1 from Proximity
	std::cout << "After stumbling in the first step, you realize you're facing a great stairwell";
	std::cout << "Leading up. My warmth fades when a cold breeze comes from the stairs.\n";
	//left03 - corridor - getting closer to objetive
		// add 1 to Proximity
	std::cout << "You are slowly passing through long corridor. There seems to be no end to it.\n";
	std::cout << "On your way you feel my warmth getting closer to you.";

	//forward01 - room - getting more distant from objetive
		// subtract 1 from Proximity
	std::cout << "Even though you walked, nothing seemed to change around you.";
	std::cout << "Your steps lead you away from me. Be careful.";
	//forward02 - small passage - getting closer to objective
		// add 1 to Proximity
	std::cout << "There is a small passage through the wall. You squeeze yourself through it.\n";
	std::cout << "Emerging on the other side you feel my warmth approaching. Find me.";
	//forward03 - old altar - same distance from objetive than previous room
		// add 0 to Proximity
	std::cout << "You get to a small room. All you can see around you is an old altar.\n";
	std::cout << "You feel my warmth unchanged. But it looks like this altar has been\n";
	std::cout << "used recently... Find me, quickly.";

	return;
}

int FFindMeGame::DistanceToObjective()
{
	// add or subtract proximity until it reaches 5* to find the objective   *see description of game in main.cpp
	// or until it reaches -5 and the player loses
	return false;
}

int FFindMeGame::Proximity()
{
	return 5;
}
