#pragma once

#include<iostream>
#include<string>

using std::string;

class Attack
{
private:
	// name of the attack
	string name;
	// physical damage of the attack
	unsigned int physicalDamage;
	// magical damage of the attack
	unsigned int magicalDamage;

public:
	// default constructor
	Attack();
	// copy constructor
	Attack(const Attack&);

	// initializer list constructor
	Attack(string aName, unsigned int aPhysicalDamage, unsigned int aMagicalDamage) :
		name(aName), physicalDamage(aPhysicalDamage), magicalDamage(aMagicalDamage)
	{ };

	// GETTERS & SETTERS
	string getName();
	void setName(string);

	unsigned int getPhysicalDamage();
	void setPhysicalDamage(unsigned int);

	unsigned int getMagicalDamage();
	void setMagicalDamage(unsigned int);
};

