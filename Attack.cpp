#include<iostream>
#include "Attack.h"

using std::cout;
using std::endl;

// ATTACK CLASS DEFINITIONS
// copy constructor
Attack::Attack(const Attack& aOriginalAttack) :
	name(aOriginalAttack.name),
	physicalDamage(aOriginalAttack.physicalDamage), magicalDamage(aOriginalAttack.magicalDamage)
{ };
// default constructor
Attack::Attack() // determine default values /!\ NOT NECESSARY?
{ };
// parameterized constructor
Attack::Attack(string aName, unsigned int aPhysicalDamage, unsigned int aMagicalDamage) :
	name(aName), physicalDamage(aPhysicalDamage), magicalDamage(aMagicalDamage)
{ };

// GETTERS & SETTERS

string Attack::getName()  const { return (*this).name; }
void Attack::setName(string aNewName) { (*this).name = aNewName; }

unsigned int Attack::getPhysicalDamage()  const { return (*this).physicalDamage; }
void Attack::setPhysicalDamage(unsigned int aNewPhysicalDamage) { (*this).physicalDamage = aNewPhysicalDamage; }

unsigned int Attack::getMagicalDamage()  const { return (*this).magicalDamage; }
void Attack::setMagicalDamage(unsigned int aNewMagicalDamage) { (*this).magicalDamage = aNewMagicalDamage; }





