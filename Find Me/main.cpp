/*This is a game where the player have to find the objetive using console commands
like 'forward', 'left', etc to navigate through a cave described with each player 
movement command. the Objective will also let the player know how far they are
from each other through the count of Proximity.
Player proximity starts at 0. When player inputs lead to a described
room closer to the objective, add 1 to Proximity. When player inputs
lead to a room farther away from the objective, subtract one from Proximity
and so on, in a way that when the Proximity value is
equal to 5(or 10 if it starts at 5...) you win and when it's equal to -5(or 0
if it starts at 5) you lose.*/

#include <iostream>
#include <string>
#include "FFindMe.h"

// function prototypes
void PrintIntro();
bool PlayGame();
std::string GetDirection();
std::string GetProximity();
bool AskToPlayAgain();
void SummariseGame();
void EndGame(); // n/a yet

FFindMeGame FMGame; // intantiate a new game, wich will be reused across plays

//entry point of the application i.e. 'int main'
int main()
{
	bool bPlayAgain = false;
	do
	{
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
}




void PrintIntro()
{
	std::cout << "\nWelcome do FIND ME! Look for me in the caves. I dare you to find me!\n";
	std::cout << "You can only do in one direction at once, so choose wisely.\n";
	std::cout << "Will you go Forward, to the Left or to the Right? \n";
	std::cout << "##################################################################################\n\n";
}

bool PlayGame()
{
	std::string Proximity = GetProximity();
	std::cout << "\nYou are lost inside a dark cave. The air chills your spine.\n";
	std::cout << "You can see nothing in front of you, only feel my warmth...\n";
	std::cout << "far...Far away... Come and find me. If you can.\n";
	std::cout << "What direction will you go? ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'r') || (Response[0] == 'l') || (Response[0] == 'f');
	if (Response[0] == 'r') 
	{
		//get random Right0X room(see FFindme.cpp for reference)
	}
	else if (Response[0] == 'l')
	{
		//get random Left0X room
	}
	else if (Response[0] == 'f')
	{
		//get random Forward0X room
	}
	else;
}

std::string GetProximity()
{
	std::string Proximity = "";
	int CurrentProximity = FMGame.Proximity();
	std::cout << "Poximity: " << CurrentProximity << std::endl;
	
	std::getline(std::cin, Proximity);

	return (Proximity);
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to try again(Y/N)? ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

void SummariseGame()
{
	return;
}

void EndGame() // not in use yet
{
	std::cout << "You lost. How sad... :C\n";
	return;
}
