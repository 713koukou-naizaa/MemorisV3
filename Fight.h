#pragma once

#include<iostream>
#include<vector>
#include"Entity.h"

using std::vector;

class Fight
{
private:
	// character representing the player in the fight
	Entity FightPlayer;
	// vector of character representing the ennemies in the fight
	vector <Entity> Ennemies;
	// round number
	unsigned int roundNumber=1;

public:
	// copy constructor
	Fight(const Fight&);
	// default constructor
	Fight(); // determine default values /!\ NOT NECESSARY?
	// initializer list constructor
	Fight(Entity, vector<Entity>, unsigned int);

	// GETTERS & SETTERS
	Entity getPlayer() const;
	void setPlayer(Entity);

	vector <Entity> getEnnemies() const;
	void setEnnemies(vector <Entity>);

	unsigned int getRoundNumber() const;
	void setRoundNumber(unsigned int);
};

