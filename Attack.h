#pragma once

#include<iostream>
#include<string>

using std::string;

class Attack
{
private:
	// name of the attack
	string attackName;
	// physical damage of the attack
	unsigned int attackPhysicalDamage;
	// magical damage of the attack
	unsigned int attackMagicalDamage;

public:
	// copy constructor
	Attack(const Attack&);
	// default constructor
	Attack(); // determine default values /!\ NOT NECESSARY?
	// parameterized constructor
	Attack(string, unsigned int, unsigned int);

	// GETTERS & SETTERS
	string getAttackName() const;
	void setAttackName(string);

	unsigned int getAttackPhysicalDamage() const;
	void setAttackPhysicalDamage(unsigned int);

	unsigned int getAttackMagicalDamage() const;
	void setAttackMagicalDamage(unsigned int);
};

