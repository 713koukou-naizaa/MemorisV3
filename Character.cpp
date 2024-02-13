#include<iostream>
#include "Character.h"

using std::cout;
using std::endl;

// CHARACTER CLASS

// copy constructor
Character::Character(const Character& OriginalCharacter)
{
	(*this).name = OriginalCharacter.name;
	(*this).healthPoints = OriginalCharacter.healthPoints;
	(*this).attack = OriginalCharacter.attack;
	(*this).defense = OriginalCharacter.defense;
}

// GETTERS & SETTERS
string Character::getName() { return (*this).name; }
void Character::setName(string aNewName) { (*this).name = aNewName; }

unsigned int Character::getHealthPoints() { return (*this).healthPoints; }
void Character::setHealthPoints(unsigned int aNewHealPoints) { (*this).healthPoints = aNewHealPoints; }
/*
double Character::getStrength() { return (*this).strength; }
void Character::setStrength(double aNewStrength) { (*this).strength = aNewStrength; }
*/
unsigned int Character::getAttack() { return (*this).attack; }
void Character::setAttack(unsigned int aNewAttack) { (*this).attack = aNewAttack; }

double Character::getDefense() { return (*this).defense; }
void Character::setDefense(double aNewDefense) { (*this).defense = aNewDefense; }

// CHARACTER FUNCTIONS
// calculate the raw damages a character deals
unsigned int Character::calculateRawDamages()
{
	return (*this).getAttack();
}
// calculate the final damages a character deals to another
// by taking into account the defense of the target character
unsigned int Character::calculateDealtDamages(unsigned int aSupposedDamages)
{
	return static_cast<unsigned int>(aSupposedDamages * (*this).getDefense());
}
// deal the final damages of one character to another
void Character::dealDamages(Character& DamageReceiver)
{
	unsigned int supposedDamages = (*this).calculateRawDamages();
	unsigned int dealtDamages = DamageReceiver.calculateDealtDamages(supposedDamages);

	DamageReceiver.setHealthPoints(DamageReceiver.getHealthPoints()-dealtDamages);
	cout << (*this).getName() << " dealt " << dealtDamages <<
	" damages to " << DamageReceiver.getName() << endl;
}

