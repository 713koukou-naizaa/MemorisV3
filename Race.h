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
	string raceName;
	// base number of health points of the race
	unsigned int raceBaseHealthPoints = 100;
	// base physical strength of the race
	double raceBasePhysicalStrength = 10;
	// base magical strength stat of the race
	double raceBaseMagicalStrength = 10;
	// base physical defense stat of the race
	double raceBasePhysicalDefense = 10;
	// base magical defense stat of the race
	double raceBaseMagicalDefense = 10;
	// vector containing all the attacks the race can learn
	vector<Attack>raceAvailableAttacks;

public:
	// copy constructor
	Race(const Race&);
	// default constructor
	Race(); // determine default values /!\ NOT NECESSARY?
	// parameterized constructor
	Race(string, unsigned int,
		double, double,
		double, double,
		vector<Attack>);

	// GETTERS & SETTERS
	string getRaceName() const;
	void setRaceName(string);

	unsigned int getRaceBaseHealthPoints() const;
	void setRaceBaseHealthPoints(unsigned int);

	double getRaceBasePhysicalStrength() const;
	void setRaceBasePhysicalStrength(double);

	double getRaceBaseMagicalStrength() const;
	void setRaceBaseMagicalStrength(double);

	double getRaceBasePhysicalDefense() const;
	void setRaceBasePhysicalDefense(double);

	double getRaceBaseMagicalDefense() const;
	void setRaceBaseMagicalDefense(double);

	vector<Attack> getRaceAvailableAttacks() const;
	void setRaceAvailableAttacks(vector<Attack>);
};

