#include "Race.h"

using std::cout;
using std::endl;

// RACE CLASS DEFINITIONS
// copy constructor
Race::Race(const Race& aOriginalRace) :
	raceName(aOriginalRace.raceName),
	raceBaseHealthPoints(aOriginalRace.raceBaseHealthPoints), raceBaseSpeed(aOriginalRace.raceBaseSpeed),
	raceBasePhysicalStrength(aOriginalRace.raceBasePhysicalStrength), raceBaseMagicalStrength(aOriginalRace.raceBaseMagicalStrength),
	raceBasePhysicalDefense(aOriginalRace.raceBasePhysicalDefense), raceBaseMagicalDefense(aOriginalRace.raceBaseMagicalDefense),
	raceAvailableAttacks(aOriginalRace.raceAvailableAttacks) { };
// default constructor
Race::Race() // determine default values /!\ NOT NECESSARY?
{
	this->raceName = "defaultRaceName";
	this->raceBaseHealthPoints = 100;
	this->raceBaseSpeed = 10;
	this->raceBasePhysicalStrength = 10;
	this->raceBaseMagicalStrength = 10;
	this->raceBasePhysicalDefense = 10;
	this->raceBaseMagicalDefense = 10;
	this->raceAvailableAttacks = { Attack(), Attack(), Attack(), Attack() };
};
// parameterized constructor
Race::Race(string aRaceName,
	unsigned int aRaceBaseHealthPoints, unsigned int aRaceBaseSpeed,
	double aRaceBasePhysicalStrength, double aRaceBaseMagicalStrength,
	double aRaceBasePhysicalDefense, double aRaceBaseMagicalDefense,
	vector<Attack>aRaceAvailableAttacks) :
	raceName(aRaceName),
	raceBaseHealthPoints(aRaceBaseHealthPoints), raceBaseSpeed(aRaceBaseSpeed),
	raceBasePhysicalStrength(aRaceBasePhysicalStrength), raceBaseMagicalStrength(aRaceBaseMagicalStrength),
	raceBaseMagicalDefense(aRaceBaseMagicalDefense), raceBasePhysicalDefense(aRaceBasePhysicalDefense),
	raceAvailableAttacks(aRaceAvailableAttacks) { };

// GETTERS & SETTERS
string Race::getRaceName() const { return this->raceName; }
void Race::setRaceName(string aNewRaceName) { this->raceName = aNewRaceName; }

unsigned int Race::getRaceBaseHealthPoints() const { return this->raceBaseHealthPoints; }
void Race::setRaceBaseHealthPoints(unsigned int aNewRaceBaseHealPoints) { this->raceBaseHealthPoints = aNewRaceBaseHealPoints; }

unsigned int Race::getRaceBaseSpeed() const { return this->raceBaseSpeed; }
void Race::setRaceBaseSpeed(unsigned int aNewRaceBaseSpeed) { this->raceBaseSpeed = aNewRaceBaseSpeed; }

double Race::getRaceBasePhysicalStrength() const { return this->raceBasePhysicalStrength; }
void Race::setRaceBasePhysicalStrength(double aNewRaceBasePhysicalStrength) { this->raceBasePhysicalStrength = aNewRaceBasePhysicalStrength; }

double Race::getRaceBaseMagicalStrength() const { return this->raceBaseMagicalStrength; }
void Race::setRaceBaseMagicalStrength(double aNewRaceBaseMagicalStrength) { this->raceBaseMagicalStrength = aNewRaceBaseMagicalStrength; }

double Race::getRaceBasePhysicalDefense() const { return this->raceBasePhysicalDefense; }
void Race::setRaceBasePhysicalDefense(double aNewRaceBasePhysicalDefense) { this->raceBasePhysicalDefense = aNewRaceBasePhysicalDefense; }

double Race::getRaceBaseMagicalDefense() const { return this->raceBaseMagicalDefense; }
void Race::setRaceBaseMagicalDefense(double aNewRaceBaseMagicalDefense) { this->raceBaseMagicalDefense = aNewRaceBaseMagicalDefense; }

vector<Attack> Race::getRaceAvailableAttacks() const { return this->raceAvailableAttacks; }
void Race::setRaceAvailableAttacks(vector<Attack> aNewRaceBaseAvailableAttacks) { this->raceAvailableAttacks = aNewRaceBaseAvailableAttacks; }

// RACE FUNCTIONS
void Race::displayRaceStats() const
{
	cout << "Name : " << this->getRaceName() << endl;
	cout << "Base health points : " << this->getRaceBaseHealthPoints() << endl;
	cout << "Base race speed : " << this->getRaceBaseSpeed() << endl;
	cout << "Base physical strength : " << this->getRaceBasePhysicalStrength() << endl;
	cout << "Base magical strength : " << this->getRaceBaseMagicalStrength() << endl;
	cout << "Base physical defense : " << this->getRaceBasePhysicalDefense() << endl;
	cout << "Base magical defense : " << this->getRaceBaseMagicalDefense() << endl;
}

// NON-MEMBER RACE FUNCTIONS

void displayPlayableRaces(const vector<Race> aPlayableRaces)
{
	unsigned int vectorSize = aPlayableRaces.size();
	for (unsigned short int index = 0; index < vectorSize; index++)
	{
		cout << "[" << index + 1 << "] " << endl;
		aPlayableRaces[index].displayRaceStats();
	}
}


