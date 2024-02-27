#pragma once

#include<iostream>
#include<string>
#include<vector>
#include"Attack.h"
#include"LearnedAttacks.h"

using std::string;
using std::vector;

class Race
{
private:
	// name of the race
	string name;
	// base number of health points of the race
	unsigned int healthPoints = 100;
	// base physical strength of the race
	double physicalStrength = 10;
	// base magical strength stat of the race
	double magicalStrength = 10;
	// base physical defense stat of the race
	double physicalDefense = 10;
	// base magical defense stat of the race
	double magicalDefense = 10;
	// vector containing all the attacks the race can learn
	vector<Attack>availableAttacks;

public:
	// copy constructor
	Race(const Race&);
	// default constructor
	Race(); // determine default values /!\ NOT NECESSARY?
	// parameterized constructor
	Race(string, unsigned int,
		double, double,
		double, double,
		vector<Attack>, LearnedAttacks);

	// GETTERS & SETTERS
	string getName() const;
	void setName(string);

	unsigned int getHealthPoints() const;
	void setHealthPoints(unsigned int);

	double getPhysicalStrength() const;
	void setPhysicalStrength(double);

	double getMagicalStrength() const;
	void setMagicalStrength(double);

	double getPhysicalDefense() const;
	void setPhysicalDefense(double);

	double getMagicalDefense() const;
	void setMagicalDefense(double);

	vector<Attack> getAvailableAttacks() const;
	void setAvailableAttacks(vector<Attack>);

	// ENTITY FUNCTIONS
	unsigned int calculatePhysicalRawDamages(Attack&) const;
	unsigned int calculateMagicalRawDamages(Attack&) const;
	unsigned int calculateDealtDamages(unsigned int, unsigned int) const;
	void dealDamages(Race&, Attack&) const;
	void displayAttacksNames() const;
	void displayStats() const;
};

