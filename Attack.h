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
	// copy constructor
	Attack(const Attack&);
	// default constructor
	Attack(); // determine default values /!\ NOT NECESSARY?
	// parameterized constructor
	Attack(string, unsigned int, unsigned int);

	// GETTERS & SETTERS
	string getName() const;
	void setName(string);

	unsigned int getPhysicalDamage() const;
	void setPhysicalDamage(unsigned int);

	unsigned int getMagicalDamage() const;
	void setMagicalDamage(unsigned int);
	
};

