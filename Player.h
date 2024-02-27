#pragma once

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
	// determine default values /!\ NOT NECESSARY?
	Player();
	// parameterized constructor
	Player(string, Entity);

	// GETTERS & SETTERS
	string getPlayerUsername() const;
	void setPlayerUsername(string);

	Entity getPlayerEntity() const;
	void setPlayerEntity(Entity);
};

