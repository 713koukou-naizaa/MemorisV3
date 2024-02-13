#pragma once

#include<iostream>
#include<string>

using std::string;

class Character
{
private:
	// name of the character
	string name;
	// number of health points of the character (integer)
	unsigned int healthPoints;
	// multiplication coefficient applied to the attack stat of the attack used
	// double strength;
	// TEMP : attack of the character
	unsigned int attack;
	// multiplication coefficient applied to the attack stat of the attack received
	double defense;

public:
	// copy constructor
	Character(const Character&);

	// initializer list constructor
	Character(string aName, unsigned int aHealthPoints, unsigned int aAttack, double aDefense) :
	name(aName), healthPoints(aHealthPoints), attack(aAttack), defense(aDefense)
	{ };

	// GETTERS & SETTERS
	string getName();
	void setName(string);

	unsigned int getHealthPoints();
	void setHealthPoints(unsigned int);
	/*
	double getStrength();
	void setStrength(double);
	*/
	unsigned int getAttack();
	void setAttack(unsigned int);

	double getDefense();
	void setDefense(double);

	// CHARACTER FUNCTIONS
	unsigned int calculateRawDamages();
	unsigned int calculateDealtDamages(unsigned int);
	void dealDamages(Character&);
};

