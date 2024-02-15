#pragma once

#include<iostream>
#include<string>
#include"Attack.h"

using std::string;

class Character
{
private:
	// name of the character
	string name;
	// number of health points of the character (integer)
	unsigned int healthPoints;
	// maximum number of health points of the character (integer)
	unsigned int maxHealthPoints;
	// multiplication coefficient applied to the damages stat of the attack used
	double physicalStrength;
	// multiplication coefficient applied to the magical damages stat of the attack used
	double magicalStrength;
	// multiplication coefficient applied to the physical damages stat of the attack received
	double physicalDefense;
	// multiplication coefficient applied to the magical damages stat of the attack received
	double magicalDefense;
	// attacks of the character
	Attack FirstAttack;
	Attack SecondAttack;
	Attack ThirdAttack;
	Attack FourthAttack;

public:
	// default constructor
	Character();
	// copy constructor
	Character(const Character&);
	// initializer list constructor
	Character(string aName, unsigned int aHealthPoints, unsigned int aMaxHealthPoints,
		double aPhysicalStrength, double aMagicalStrength,
		double aPhysicalDefense, double aMagicalDefense,
		Attack aFirstAttack, Attack aSecondAttack,
		Attack aThirdAttack, Attack aFourthAttack) :
		name(aName), healthPoints(aHealthPoints), maxHealthPoints(aMaxHealthPoints),
		physicalStrength(aPhysicalStrength), magicalStrength(aMagicalStrength),
		magicalDefense(aMagicalDefense), physicalDefense(aPhysicalDefense),
		FirstAttack(aFirstAttack), SecondAttack(aSecondAttack),
		ThirdAttack(aThirdAttack), FourthAttack(aFourthAttack)
	{ };

	// GETTERS & SETTERS
	string getName() const;
	void setName(string);
		
	unsigned int getHealthPoints() const;
	void setHealthPoints(unsigned int);

	unsigned int getMaxHealthPoints() const;
	void setMaxHealthPoints(unsigned int);

	double getPhysicalStrength() const;
	void setPhysicalStrength(double);

	double getMagicalStrength() const;
	void setMagicalStrength(double);

	double getPhysicalDefense() const;
	void setPhysicalDefense(double);

	double getMagicalDefense() const;
	void setMagicalDefense(double);

	Attack getFirstAttack() const;
	void setFirstAttack(Attack);

	Attack getSecondAttack() const;
	void setSecondAttack(Attack);

	Attack getThirdAttack() const;
	void setThirdAttack(Attack);

	Attack getFourthAttack() const;
	void setFourthAttack(Attack);

	// CHARACTER FUNCTIONS
	unsigned int calculatePhysicalRawDamages(Attack&) const;
	unsigned int calculateMagicalRawDamages(Attack&) const;
	unsigned int calculateDealtDamages(unsigned int, unsigned int) const;
	void dealDamages(Character&, Attack&) const;
};

