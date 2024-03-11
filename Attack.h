#ifndef ATTACK_H
#define ATTACK_H

#include<iostream>
#include<string>

using std::string;

class Attack
{
private:
	// name of the attack
	string attackName;
	// if the attack deals damage or heals
	bool attackIsHealing;
	// physical damage of the attack
	unsigned int attackPhysicalDamage;
	// magical damage of the attack
	unsigned int attackMagicalDamage;
	// number of health points recovered after healing
	unsigned int attackHealingPoints;

public:
	// copy constructor
	Attack(const Attack&);
	// default constructor
	Attack();
	// parameterized constructor
	Attack(string, bool, unsigned int, unsigned int, unsigned int);

	// GETTERS & SETTERS
	string getAttackName() const;
	void setAttackName(string);

	bool getAttackIsHealing() const;
	void setAttackIsHealing(bool);

	unsigned int getAttackPhysicalDamage() const;
	void setAttackPhysicalDamage(unsigned int);

	unsigned int getAttackMagicalDamage() const;
	void setAttackMagicalDamage(unsigned int);

	unsigned int getAttackHealingPoints() const;
	void setAttackHealingPoints(unsigned int);
};


#endif