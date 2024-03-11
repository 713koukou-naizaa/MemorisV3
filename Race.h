#ifndef RACE_H
#define RACE_H

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
	unsigned int raceBaseHealthPoints;
	// base speed of the race
	unsigned int raceBaseSpeed;
	// base physical strength of the race
	double raceBasePhysicalStrength;
	// base magical strength stat of the race
	double raceBaseMagicalStrength;
	// base physical defense stat of the race
	double raceBasePhysicalDefense ;
	// base magical defense stat of the race
	double raceBaseMagicalDefense;
	// vector containing all the attacks the race can learn
	vector<Attack>raceAvailableAttacks;

public:
	// copy constructor
	Race(const Race&);
	// default constructor
	Race();
	// parameterized constructor
	Race(string, unsigned int, unsigned int, double, double, double, double, vector<Attack>);

	// GETTERS & SETTERS
	string getRaceName() const;
	void setRaceName(string);

	unsigned int getRaceBaseHealthPoints() const;
	void setRaceBaseHealthPoints(unsigned int);

	unsigned int getRaceBaseSpeed() const;
	void setRaceBaseSpeed(unsigned int);

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

	// RACE FUNCTIONS

	// display the race stats
	void displayRaceStats() const;
};

// NON-MEMBER RACE FUNCTIONS

// display playable races
void displayPlayableRaces(const vector<Race>);

#endif