#pragma once

#include<iostream>
#include<string>
#include"Race.h"
#include"LearnedAttacks.h"

using std::string;

class Entity
{
private:
	string entityName;
	Race EntityRace;
	LearnedAttacks EntityLearnedAttacks;
	// max number of healthPoint of an entity
	unsigned int maxHealthPoints = 100;
	// base number of health points of an entity
	unsigned int healthPoints = maxHealthPoints;
	// base physical strength of an entity
	double physicalStrength = 10;
	// base magical strength stat of an entity
	double magicalStrength = 10;
	// base physical defense stat of an entity
	double physicalDefense = 10;
	// base magical defense stat of an entity
	double magicalDefense = 10;

public:
	// copy constructor
	Entity(const Entity&);
	// default constructor
	Entity(); // determine default values /!\ NOT NECESSARY?
	// parameterized constructor
	Entity(string, Race, LearnedAttacks,
		unsigned int, unsigned int,
		double, double,
		double, double);

	// GETTERS & SETTERS
	string getName() const;
	void setName(string);

	Race getEntityRace() const;
	void setEntityRace(Race);

	LearnedAttacks getLearnedAttacks() const;
	void setLearnedAttacks(LearnedAttacks);
};

