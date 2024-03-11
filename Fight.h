#ifndef FIGHT_H
#define FIGHT_H

#include<iostream>
#include<vector>
#include<string>
#include"Entity.h"

using std::vector;
using std::string;

class Fight
{
private:
	// character representing the player in the fight
	Entity FightPlayer;
	// vector of character representing the ennemies in the fight
	Entity Ennemy;
	// round number
	unsigned int roundNumber=1;
	// name of the winner of the fight
	string winnerName;
	// variable containing a number to indicate whose turn it is to play
	// 1 = player, 2 = ennemy
	unsigned short int whoseTurn=1;


public:
	// copy constructor
	Fight(const Fight&);
	// default constructor
	Fight(); // determine default values /!\ NOT NECESSARY?
	// initializer list constructor
	Fight(Entity, Entity);

	// GETTERS & SETTERS
	Entity getPlayer() const;
	void setPlayer(Entity);

	Entity getEnnemy() const;
	void setEnnemy(Entity);

	unsigned int getRoundNumber() const;
	void setRoundNumber(unsigned int);

	string getWinnerName() const;
	void setWinnerName(string);

	unsigned short int getWhoseTurn() const;
	void setWhoseTurn(unsigned short int);

	// FIGHT FUNCTIONS
	// sets the value of whoseTurn according to the speed of the fighters
	void determineWhoseTurn(Entity&, Entity&);
	// function running the fight
	void runFight(Entity, Entity&);
	// starts the fight
	void fightInitialization(Entity&, Entity&);
	// function looping the rounds of the fight
	void fightLoop(Entity&, Entity&);
	// function running a round of the fight
	void fightRound(Entity&, Entity&);
	// allow the entities to play their turn in a fight
	void playFightTurns(Entity&, Entity&);
	// allow the entity to play its action
	void playEntityAction(Entity&, Entity&);
};


#endif