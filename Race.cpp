#include "Race.h"

using std::cout;
using std::endl;

// RACE CLASS DEFINITIONS
// copy constructor
Race::Race(const Race& aOriginalRace) :
	name(aOriginalRace.name), healthPoints(aOriginalRace.healthPoints),
	physicalStrength(aOriginalRace.physicalStrength), magicalStrength(aOriginalRace.magicalStrength),
	physicalDefense(aOriginalRace.physicalDefense), magicalDefense(aOriginalRace.magicalDefense),
	availableAttacks(aOriginalRace.availableAttacks)
{ };
// default constructor
Race::Race() // determine default values /!\ NOT NECESSARY?
{ };
// parameterized constructor
Race::Race(string aName, unsigned int aHealthPoints,
	double aPhysicalStrength, double aMagicalStrength,
	double aPhysicalDefense, double aMagicalDefense,
	vector<Attack>aAvailableAttacks, LearnedAttacks aLearnedAttacksVector) :
	name(aName), healthPoints(aHealthPoints),
	physicalStrength(aPhysicalStrength), magicalStrength(aMagicalStrength),
	magicalDefense(aMagicalDefense), physicalDefense(aPhysicalDefense),
	availableAttacks(aAvailableAttacks)
{ };

// GETTERS & SETTERS
string Race::getName() const { return (*this).name; }
void Race::setName(string aNewName) { (*this).name = aNewName; }

unsigned int Race::getHealthPoints() const { return (*this).healthPoints; }
void Race::setHealthPoints(unsigned int aNewHealPoints) { (*this).healthPoints = aNewHealPoints; }

double Race::getPhysicalStrength() const { return (*this).physicalStrength; }
void Race::setPhysicalStrength(double aNewPhysicalStrength) { (*this).physicalStrength = aNewPhysicalStrength; }

double Race::getMagicalStrength() const { return (*this).magicalStrength; }
void Race::setMagicalStrength(double aNewMagicalStrength) { (*this).magicalStrength = aNewMagicalStrength; }

double Race::getPhysicalDefense() const { return (*this).physicalDefense; }
void Race::setPhysicalDefense(double aNewPhysicalDefense) { (*this).physicalDefense = aNewPhysicalDefense; }

double Race::getMagicalDefense() const { return (*this).magicalDefense; }
void Race::setMagicalDefense(double aNewMagicalDefense) { (*this).magicalDefense = aNewMagicalDefense; }

vector<Attack> Race::getAvailableAttacks() const { return (*this).availableAttacks; }
void Race::setAvailableAttacks(vector<Attack> aNewAvailableAttacks) { (*this).availableAttacks = aNewAvailableAttacks; }




// RACE FUNCTIONS
// calculate the physical raw damages a race deals
unsigned int Race::calculatePhysicalRawDamages(Attack& aUsedAttack) const
{
	unsigned int physicalRawDamages = (*this).getPhysicalStrength() * aUsedAttack.getPhysicalDamage();
	// cout << "DEBUG : physicalRawDamages=" << physicalRawDamages << endl;
	return physicalRawDamages;
}
// calculate the magical raw damages a race deals
unsigned int Race::calculateMagicalRawDamages(Attack& aUsedAttack) const
{
	unsigned int magicalRawDamages = (*this).getMagicalStrength() * aUsedAttack.getMagicalDamage();
	// cout << "DEBUG : magicalRawDamages=" << magicalRawDamages << endl;
	return magicalRawDamages;
}
// calculate the final damages a race deals to another
// by taking into account the physicalDefense and magicalDefense of the targeted race
unsigned int Race::calculateDealtDamages(unsigned int aPhysicalRawDamages, unsigned int aMagicalRawDamages) const
{
	unsigned int dealtPhysicalDamages = static_cast<unsigned int>(aPhysicalRawDamages * (*this).getPhysicalDefense());
	// cout << "DEBUG : dealtPhysicalDamages=" << dealtPhysicalDamages << endl;
	unsigned int dealtMagicalDamages = static_cast<unsigned int>(aMagicalRawDamages * (*this).getMagicalDefense());
	// cout << "DEBUG : dealtMagicalDamages=" << dealtMagicalDamages << endl;
	unsigned int dealtDamages = dealtPhysicalDamages + dealtMagicalDamages;
	// cout << "DEBUG : dealtDamages=" << dealtDamages << endl;
	return dealtDamages;
}
// deal the final damages of one race to another
void Race::dealDamages(Race& aDamageReceiver, Attack& aUsedAttack) const
{
	unsigned int supposedPhysicalDamages = (*this).calculatePhysicalRawDamages(aUsedAttack);
	unsigned int supposedMagicalDamages = (*this).calculateMagicalRawDamages(aUsedAttack);

	unsigned int dealtDamages = aDamageReceiver.calculateDealtDamages(supposedPhysicalDamages, supposedMagicalDamages);

	aDamageReceiver.setHealthPoints(aDamageReceiver.getHealthPoints() - dealtDamages);
	cout << (*this).getName() << " used " << aUsedAttack.getName() << " and dealt " << dealtDamages <<
		" damages to " << aDamageReceiver.getName() << endl;
}
// display the attacks of a race
void Race::displayAttacksNames() const
{
	cout << "Your attacks :" << endl;
	cout << "[1] " << (*this).getFirstAttack().getName() << endl;
	cout << "[2] " << (*this).getSecondAttack().getName() << endl;
	cout << "[3] " << (*this).getThirdAttack().getName() << endl;
	cout << "[4] " << (*this).getFourthAttack().getName() << endl;
}
// display the stats of a race
void Race::displayStats() const
{
	cout << "Name : " << (*this).getName() << endl;
	cout << "Health points : " << (*this).getHealthPoints() << endl;
	cout << "Physical strength : " << (*this).getPhysicalStrength() << endl;
	cout << "Magical strength : " << (*this).getMagicalStrength() << endl;
	cout << "Physical defense : " << (*this).getPhysicalDefense() << endl;
	cout << "Magical defense : " << (*this).getMagicalDefense() << endl;
	cout << "First attack : " << (*this).getFirstAttack().getName() << endl;
	cout << "Second attack : " << (*this).getSecondAttack().getName() << endl;
	cout << "Third attack : " << (*this).getThirdAttack().getName() << endl;
	cout << "Fourth attack : " << (*this).getFourthAttack().getName() << "\n" << endl;
}







