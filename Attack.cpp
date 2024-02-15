#include<iostream>
#include "Attack.h"

using std::cout;
using std::endl;

// ATTACK CLASS DEFINITIONS

// default constructor
Attack::Attack()
{
	(*this).name = "DefaultAttack";
	(*this).physicalDamage = 10;
	(*this).magicalDamage = 10;
}

// copy constructor
Attack::Attack(const Attack& OriginalAttack)
{
	(*this).name = OriginalAttack.name;
	(*this).physicalDamage = OriginalAttack.physicalDamage;
	(*this).magicalDamage = OriginalAttack.magicalDamage;
}

// GETTERS & SETTERS

string Attack::getName() { return (*this).name; }
void Attack::setName(string aNewName) { (*this).name = aNewName; }

unsigned int Attack::getPhysicalDamage() { return (*this).physicalDamage; }
void Attack::setPhysicalDamage(unsigned int aNewPhysicalDamage) { (*this).physicalDamage = aNewPhysicalDamage; }

unsigned int Attack::getMagicalDamage() { return (*this).magicalDamage; }
void Attack::setMagicalDamage(unsigned int aNewMagicalDamage) { (*this).magicalDamage = aNewMagicalDamage; }






