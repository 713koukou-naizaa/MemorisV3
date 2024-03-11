#include<iostream>
#include "LearnedAttacks.h"

using std::cout;
using std::endl;

// LEARNED_ATTACKS CLASS
// copy constructor
LearnedAttacks::LearnedAttacks(const LearnedAttacks& originalLearnedAttacks) :
	FirstLearnedAttack(originalLearnedAttacks.FirstLearnedAttack),
	SecondLearnedAttack(originalLearnedAttacks.SecondLearnedAttack),
	ThirdLearnedAttack(originalLearnedAttacks.ThirdLearnedAttack),
	FourthLearnedAttack(originalLearnedAttacks.FourthLearnedAttack),
	maxNumberOfLearnedAttacks(originalLearnedAttacks.maxNumberOfLearnedAttacks) { };
// default constructor
LearnedAttacks::LearnedAttacks()
{
	FirstLearnedAttack = Attack();
	SecondLearnedAttack = Attack();
	ThirdLearnedAttack = Attack();
	FourthLearnedAttack = Attack();
};
// parameterized constructor
LearnedAttacks::LearnedAttacks(Attack aFirstLearnedAttack,
	Attack aSecondLearnedAttack,
	Attack aThirdLearnedAttack,
	Attack aFourthLearnedAttack) :
	FirstLearnedAttack(aFirstLearnedAttack),
	SecondLearnedAttack(aSecondLearnedAttack),
	ThirdLearnedAttack(aThirdLearnedAttack),
	FourthLearnedAttack(aFourthLearnedAttack) { };

// GETTERS & SETTERS
Attack LearnedAttacks::getFirstLearnedAttack() const { return FirstLearnedAttack; }
void LearnedAttacks::setFirstLearnedAttack(Attack aNewFirstLearnedAttack) { FirstLearnedAttack = aNewFirstLearnedAttack; }

Attack LearnedAttacks::getSecondLearnedAttack() const { return SecondLearnedAttack; }
void LearnedAttacks::setSecondLearnedAttack(Attack aNewSecondLearnedAttack) { SecondLearnedAttack = aNewSecondLearnedAttack; }

Attack LearnedAttacks::getThirdLearnedAttack() const { return ThirdLearnedAttack; }
void LearnedAttacks::setThirdLearnedAttack(Attack aNewThirdLearnedAttack) { ThirdLearnedAttack = aNewThirdLearnedAttack; }

Attack LearnedAttacks::getFourthLearnedAttack() const { return FourthLearnedAttack; }
void LearnedAttacks::setFourthLearnedAttack(Attack aNewFourthLearnedAttack) { FourthLearnedAttack = aNewFourthLearnedAttack; }

unsigned short int LearnedAttacks::getMaxNumberOfLearnedAttacks() const { return maxNumberOfLearnedAttacks; }
void LearnedAttacks::setMaxNumberOfLearnedAttacks(unsigned short int aNewMaxNumberOfLearnedAttacks) { maxNumberOfLearnedAttacks = aNewMaxNumberOfLearnedAttacks; }

vector<Attack> LearnedAttacks::getLearnedAttacksVector() const { return learnedAttacksVector; }
void LearnedAttacks::setLearnedAttacksVector(vector<Attack> aNewLearnedAttacksVector) { learnedAttacksVector = aNewLearnedAttacksVector; }

// LEARNED_ATTACKS FUNCTIONS
void LearnedAttacks::displayLearnedAttacks() const
{
	cout << "[1] " << this->getLearnedAttacksVector()[0].getAttackName() << endl;
	cout << "[2] " << this->getLearnedAttacksVector()[1].getAttackName() << endl;
	cout << "[3] " << this->getLearnedAttacksVector()[2].getAttackName() << endl;
	cout << "[4] " << this->getLearnedAttacksVector()[3].getAttackName() << endl;
}





