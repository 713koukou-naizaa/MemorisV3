#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include<string>
#include"Entity.h"

using std::string;

class Player
{
private:
	// player username
	string playerUsername;
	// entity chosen by the player throughout the game
	Entity PlayerEntity;

public:
	// copy constructor
	Player(const Player&);
	// default constructor
	Player();
	// parameterized constructor
	Player(string, Entity);

	// GETTERS & SETTERS
	string getPlayerUsername() const;
	void setPlayerUsername(string);

	Entity getPlayerEntity() const;
	void setPlayerEntity(Entity);

	// PLAYER FUNCTIONS

	// asks the player to choose a username and sets it as its username
	void chooseUsername();
	// asks the player to choose a name and sets it as its name
	void chooseEntityName();
	// adjusts all the stats of the entity according to its race
	void adjustEntityStats();
	// initializes the player's entity attributes
	void initializePlayerEntity(const vector<Race> aPlayableRaces, const LearnedAttacks aPlayerLearnedAttacks);
};


#endif