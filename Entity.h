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
	unsigned int entityMaxHealthPoints = 100;
	// base number of health points of an entity
	unsigned int entityHealthPoints = entityMaxHealthPoints;
	// base physical strength of an entity
	double entityPhysicalStrength = 10;
	// base magical strength stat of an entity
	double entityMagicalStrength = 10;
	// base physical defense stat of an entity
	double entityPhysicalDefense = 10;
	// base magical defense stat of an entity
	double entityMagicalDefense = 10;

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
	string getEntityName() const;
	void setEntityName(string);

	Race getEntityRace() const;
	void setEntityRace(Race);

	LearnedAttacks getEntityLearnedAttacks() const;
	void setEntityLearnedAttacks(LearnedAttacks);

	unsigned int getEntityMaxHealthPoints() const;
	void setEntityMaxHealthPoints(unsigned int);

	unsigned int getEntityHealthPoints() const;
	void setEntityHealthPoints(unsigned int);

	double getEntityPhysicalStrength() const;
	void setEntityPhysicalStrength(double);

	double getEntityMagicalStrength() const;
	void setEntityMagicalStrength(double);

	double getEntityPhysicalDefense() const;
	void setEntityPhysicalDefense(double);

	double getEntityMagicalDefense() const;
	void setEntityMagicalDefense(double);
};

