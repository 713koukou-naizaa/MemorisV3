#include<iostream>
#include "Attack.h"

using std::cout;
using std::endl;

// ATTACK CLASS DEFINITIONS
// copy constructor
Attack::Attack(const Attack& aOriginalAttack) :
	attackName(aOriginalAttack.attackName), attackIsHealing(aOriginalAttack.attackIsHealing),
	attackPhysicalDamage(aOriginalAttack.attackPhysicalDamage), attackMagicalDamage(aOriginalAttack.attackMagicalDamage),
	attackHealingPoints(aOriginalAttack.attackHealingPoints) { };
// default constructor
Attack::Attack()
{
	this->attackName = "defaultAttackName";
	this->attackIsHealing = false;
	this->attackPhysicalDamage = 1;
	this->attackMagicalDamage = 1;
	this->attackHealingPoints= 1;
};
// parameterized constructor
Attack::Attack(string aAttackName, bool aAttackIsHealing,
	unsigned int aAttackPhysicalDamage, unsigned int aAttackMagicalDamage,
	unsigned int aAttackHealingPoints) :
	attackName(aAttackName), attackIsHealing(aAttackIsHealing),
	attackPhysicalDamage(aAttackPhysicalDamage), attackMagicalDamage(aAttackMagicalDamage),
	attackHealingPoints(aAttackHealingPoints) { };

// GETTERS & SETTERS

string Attack::getAttackName()  const { return this->attackName; }
void Attack::setAttackName(string aNewAttackName) { this->attackName = aNewAttackName; }

bool Attack::getAttackIsHealing()  const { return this->attackIsHealing; }
void Attack::setAttackIsHealing(bool aNewAttackIsHealing) { this->attackIsHealing = aNewAttackIsHealing; }

unsigned int Attack::getAttackPhysicalDamage()  const { return this->attackPhysicalDamage; }
void Attack::setAttackPhysicalDamage(unsigned int aNewAttackPhysicalDamage) { this->attackPhysicalDamage = aNewAttackPhysicalDamage; }

unsigned int Attack::getAttackMagicalDamage()  const { return this->attackMagicalDamage; }
void Attack::setAttackMagicalDamage(unsigned int aNewAttackMagicalDamage) { this->attackMagicalDamage = aNewAttackMagicalDamage; }

unsigned int Attack::getAttackHealingPoints()  const { return this->attackHealingPoints; }
void Attack::setAttackHealingPoints(unsigned int aNewAttackHealingPoints) { this->attackHealingPoints = aNewAttackHealingPoints; }



