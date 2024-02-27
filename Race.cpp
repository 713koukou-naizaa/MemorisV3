#include "Race.h"

using std::cout;
using std::endl;

// RACE CLASS DEFINITIONS
// copy constructor
Race::Race(const Race& aOriginalRace) :
	raceName(aOriginalRace.raceName), raceBaseHealthPoints(aOriginalRace.raceBaseHealthPoints),
	raceBasePhysicalStrength(aOriginalRace.raceBasePhysicalStrength), raceBaseMagicalStrength(aOriginalRace.raceBaseMagicalStrength),
	raceBasePhysicalDefense(aOriginalRace.raceBasePhysicalDefense), raceBaseMagicalDefense(aOriginalRace.raceBaseMagicalDefense),
	raceAvailableAttacks(aOriginalRace.raceAvailableAttacks)
{ };
// default constructor
Race::Race() // determine default values /!\ NOT NECESSARY?
{
	(*this).raceName = "defaultRaceName";
	(*this).raceAvailableAttacks = { Attack(), Attack(), Attack(), Attack() };
};
// parameterized constructor
Race::Race(string aRaceName, unsigned int aRaceBaseHealthPoints,
	double aRaceBasePhysicalStrength, double aRaceBaseMagicalStrength,
	double aRaceBasePhysicalDefense, double aRaceBaseMagicalDefense,
	vector<Attack>aRaceAvailableAttacks) :
	raceName(aRaceName), raceBaseHealthPoints(aRaceBaseHealthPoints),
	raceBasePhysicalStrength(aRaceBasePhysicalStrength), raceBaseMagicalStrength(aRaceBaseMagicalStrength),
	raceBaseMagicalDefense(aRaceBaseMagicalDefense), raceBasePhysicalDefense(aRaceBasePhysicalDefense),
	raceAvailableAttacks(aRaceAvailableAttacks)
{ };

// GETTERS & SETTERS
string Race::getRaceName() const { return (*this).raceName; }
void Race::setRaceName(string aNewRaceName) { (*this).raceName = aNewRaceName; }

unsigned int Race::getRaceBaseHealthPoints() const { return (*this).raceBaseHealthPoints; }
void Race::setRaceBaseHealthPoints(unsigned int aNewRaceBaseHealPoints) { (*this).raceBaseHealthPoints = aNewRaceBaseHealPoints; }

double Race::getRaceBasePhysicalStrength() const { return (*this).raceBasePhysicalStrength; }
void Race::setRaceBasePhysicalStrength(double aNewRaceBasePhysicalStrength) { (*this).raceBasePhysicalStrength = aNewRaceBasePhysicalStrength; }

double Race::getRaceBaseMagicalStrength() const { return (*this).raceBaseMagicalStrength; }
void Race::setRaceBaseMagicalStrength(double aNewRaceBaseMagicalStrength) { (*this).raceBaseMagicalStrength = aNewRaceBaseMagicalStrength; }

double Race::getRaceBasePhysicalDefense() const { return (*this).raceBasePhysicalDefense; }
void Race::setRaceBasePhysicalDefense(double aNewRaceBasePhysicalDefense) { (*this).raceBasePhysicalDefense = aNewRaceBasePhysicalDefense; }

double Race::getRaceBaseMagicalDefense() const { return (*this).raceBaseMagicalDefense; }
void Race::setRaceBaseMagicalDefense(double aNewRaceBaseMagicalDefense) { (*this).raceBaseMagicalDefense = aNewRaceBaseMagicalDefense; }

vector<Attack> Race::getRaceAvailableAttacks() const { return (*this).raceAvailableAttacks; }
void Race::setRaceAvailableAttacks(vector<Attack> aNewRaceBaseAvailableAttacks) { (*this).raceAvailableAttacks = aNewRaceBaseAvailableAttacks; }






