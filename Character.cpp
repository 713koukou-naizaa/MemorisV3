#include<iostream>
#include "Character.h"

using std::cout;
using std::endl;

// CHARACTER CLASS

// default constructor
Character::Character()
{
	Attack DefaultFirstAttack("DefaultFirstAttack", 10, 10);
	Attack DefaultSecondAttack("DefaultSecondAttack", 20, 20);
	Attack DefaultThirdAttack("DefaultThirdAttack", 30, 30);
	Attack DefaultFourthAttack("DefaultFourthAttack", 40, 40);

	(*this).name = "DefaultCharacter";
	(*this).healthPoints = 100;
	(*this).physicalStrength = 50;
	(*this).physicalDefense = 0.5;
	(*this).FirstAttack = DefaultFirstAttack;
	(*this).SecondAttack = DefaultSecondAttack;
	(*this).ThirdAttack = DefaultThirdAttack;
	(*this).FourthAttack = DefaultFourthAttack;
}

// copy constructor
Character::Character(const Character& OriginalCharacter)
{
	(*this).name = OriginalCharacter.name;
	(*this).healthPoints = OriginalCharacter.healthPoints;
	(*this).physicalStrength = OriginalCharacter.physicalStrength;
	(*this).physicalDefense = OriginalCharacter.physicalDefense;
	(*this).FirstAttack = OriginalCharacter.FirstAttack;
	(*this).SecondAttack = OriginalCharacter.SecondAttack;
	(*this).ThirdAttack = OriginalCharacter.ThirdAttack;
	(*this).FourthAttack = OriginalCharacter.FourthAttack;
}

// GETTERS & SETTERS
string Character::getName() const { return (*this).name; }
void Character::setName(string aNewName) { (*this).name = aNewName; }

unsigned int Character::getHealthPoints() const { return (*this).healthPoints; }
void Character::setHealthPoints(unsigned int aNewHealPoints) { (*this).healthPoints = aNewHealPoints; }

unsigned int Character::getMaxHealthPoints() const { return (*this).maxHealthPoints; }
void Character::setMaxHealthPoints(unsigned int aNewMaxHealPoints) { (*this).maxHealthPoints = aNewMaxHealPoints; }

double Character::getPhysicalStrength() const { return (*this).physicalStrength; }
void Character::setPhysicalStrength(double aNewPhysicalStrength) { (*this).physicalStrength = aNewPhysicalStrength; }

double Character::getMagicalStrength() const { return (*this).magicalStrength; }
void Character::setMagicalStrength(double aNewMagicalStrength) { (*this).magicalStrength = aNewMagicalStrength; }

double Character::getPhysicalDefense() const { return (*this).physicalDefense; }
void Character::setPhysicalDefense(double aNewPhysicalDefense) { (*this).physicalDefense = aNewPhysicalDefense; }

double Character::getMagicalDefense() const { return (*this).magicalDefense; }
void Character::setMagicalDefense(double aNewMagicalDefense) { (*this).magicalDefense = aNewMagicalDefense; }

Attack Character::getFirstAttack() const { return (*this).FirstAttack; }
void Character::setFirstAttack(Attack aNewFirstAttack) { (*this).FirstAttack = aNewFirstAttack; }

Attack Character::getSecondAttack() const { return (*this).SecondAttack; }
void Character::setSecondAttack(Attack aNewSecondAttack) { (*this).SecondAttack = aNewSecondAttack; }

Attack Character::getThirdAttack() const { return (*this).ThirdAttack; }
void Character::setThirdAttack(Attack aNewThirdAttack) { (*this).ThirdAttack = aNewThirdAttack; }

Attack Character::getFourthAttack() const { return (*this).FourthAttack; }
void Character::setFourthAttack(Attack aNewFourthAttack) { (*this).FourthAttack = aNewFourthAttack; }

// CHARACTER FUNCTIONS
// calculate the physical raw damages a character deals
unsigned int Character::calculatePhysicalRawDamages(Attack& aUsedAttack) const
{
	unsigned int physicalRawDamages = (*this).getPhysicalStrength() * aUsedAttack.getPhysicalDamage();
	cout << "DEBUG : physicalRawDamages=" << physicalRawDamages << endl;
	return physicalRawDamages;
}
// calculate the magical raw damages a character deals
unsigned int Character::calculateMagicalRawDamages(Attack& aUsedAttack) const
{
	unsigned int magicalRawDamages = (*this).getMagicalStrength() * aUsedAttack.getMagicalDamage();
	cout << "DEBUG : magicalRawDamages=" << magicalRawDamages << endl;
	return magicalRawDamages;
}
// calculate the final damages a character deals to another
// by taking into account the physicalDefense and magicalDefense of the targeted character
unsigned int Character::calculateDealtDamages(unsigned int aPhysicalRawDamages, unsigned int aMagicalRawDamages) const
{
	unsigned int dealtPhysicalDamages = static_cast<unsigned int>(aPhysicalRawDamages * (*this).getPhysicalDefense());
	cout << "DEBUG : dealtPhysicalDamages=" << dealtPhysicalDamages << endl;
	unsigned int dealtMagicalDamages = static_cast<unsigned int>(aMagicalRawDamages * (*this).getMagicalDefense());
	cout << "DEBUG : dealtMagicalDamages=" << dealtMagicalDamages << endl;
	unsigned int dealtDamages = dealtPhysicalDamages + dealtMagicalDamages;
	cout << "DEBUG : dealtDamages=" << dealtDamages << endl;
	return dealtDamages;
}
// deal the final damages of one character to another
void Character::dealDamages(Character& aDamageReceiver, Attack& aUsedAttack) const
{
	unsigned int supposedPhysicalDamages = (*this).calculatePhysicalRawDamages(aUsedAttack);
	unsigned int supposedMagicalDamages = (*this).calculateMagicalRawDamages(aUsedAttack);

	unsigned int dealtDamages = aDamageReceiver.calculateDealtDamages(supposedPhysicalDamages, supposedMagicalDamages);

	aDamageReceiver.setHealthPoints(aDamageReceiver.getHealthPoints()-dealtDamages);
	cout << (*this).getName() << " used " << aUsedAttack.getName() << " and dealt " << dealtDamages <<
	" damages to " << aDamageReceiver.getName() << endl;
}

