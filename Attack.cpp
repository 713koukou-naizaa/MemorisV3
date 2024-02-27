#include<iostream>
#include "Attack.h"

using std::cout;
using std::endl;

// ATTACK CLASS DEFINITIONS
// copy constructor
Attack::Attack(const Attack& aOriginalAttack) :
	attackName(aOriginalAttack.attackName),
	attackPhysicalDamage(aOriginalAttack.attackPhysicalDamage), attackMagicalDamage(aOriginalAttack.attackMagicalDamage)
{ };
// default constructor
Attack::Attack() // determine default values /!\ NOT NECESSARY?
{
	(*this).attackName = "defaultAttackName";
	(*this).attackPhysicalDamage = 1;
	(*this).attackMagicalDamage = 1;
};
// parameterized constructor
Attack::Attack(string aAttackName, unsigned int aAttackPhysicalDamage, unsigned int aAttackMagicalDamage) :
	attackName(aAttackName), attackPhysicalDamage(aAttackPhysicalDamage), attackMagicalDamage(aAttackMagicalDamage)
{ };

// GETTERS & SETTERS

string Attack::getAttackName()  const { return (*this).attackName; }
void Attack::setAttackName(string aNewAttackName) { (*this).attackName = aNewAttackName; }

unsigned int Attack::getAttackPhysicalDamage()  const { return (*this).attackPhysicalDamage; }
void Attack::setAttackPhysicalDamage(unsigned int aNewAttackPhysicalDamage) { (*this).attackPhysicalDamage = aNewAttackPhysicalDamage; }

unsigned int Attack::getAttackMagicalDamage()  const { return (*this).attackMagicalDamage; }
void Attack::setAttackMagicalDamage(unsigned int aNewAttackMagicalDamage) { (*this).attackMagicalDamage = aNewAttackMagicalDamage; }





