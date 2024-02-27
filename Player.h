#pragma once

#include<iostream>
#include<string>
#include"Entity.h"

using std::string;

class Player
{
private:
	// player username
	string username;
	// entity chosen by the player throughout the game
	Entity PlayerEntity;

public:
	// copy constructor
	Player(const Player&);
	// determine default values /!\ NOT NECESSARY?
	Player();
	// parameterized constructor
	Player(string aUsername, Entity aPlayerEntity);

	// GETTERS & SETTERS
	string getUsername() const;
	void setUsername(string);

	Entity getChosenEntity() const;
	void setChosenEntity(Entity);

	// PLAYER FUNCTIONS
	void displayProperties();
};

