#include "LearnedAttacks.h"

// LEARNED_ATTACKS CLASS
// copy constructor
LearnedAttacks::LearnedAttacks(const LearnedAttacks& originalLearnedAttacks) :
	FirstAttack(originalLearnedAttacks.FirstAttack), SecondAttack(originalLearnedAttacks.SecondAttack),
	ThirdAttack(originalLearnedAttacks.ThirdAttack), FourthAttack(originalLearnedAttacks.FourthAttack),
	maxNumberOfAttacks(originalLearnedAttacks.maxNumberOfAttacks)
{ };
// default constructor
LearnedAttacks::LearnedAttacks() // determine default values /!\ NOT NECESSARY?
{ };
// parameterized constructor
LearnedAttacks::LearnedAttacks(Attack aFirstAttack, Attack aSecondAttack,
	Attack aThirdAttack, Attack aFourthAttack,
	unsigned short int aMaxNumberOfAttacks,
	vector<Attack> aLearnedAttacksVector) :
	FirstAttack(aFirstAttack), SecondAttack(aSecondAttack),
	ThirdAttack(aThirdAttack), FourthAttack(aFourthAttack),
	maxNumberOfAttacks(aMaxNumberOfAttacks),
	learnedAttacksVector(aLearnedAttacksVector)
{ };

// GETTERS & SETTERS
Attack LearnedAttacks::getFirstAttack() const { return FirstAttack; }
void LearnedAttacks::setFirstAttack(Attack aFirstAttack) { FirstAttack = aFirstAttack; }

Attack LearnedAttacks::getSecondAttack() const { return SecondAttack; }
void LearnedAttacks::setSecondAttack(Attack aSecondAttack) { SecondAttack = aSecondAttack; }

Attack LearnedAttacks::getThirdAttack() const { return ThirdAttack; }
void LearnedAttacks::setThirdAttack(Attack aThirdAttack) { ThirdAttack = aThirdAttack; }

Attack LearnedAttacks::getFourthAttack() const { return FourthAttack; }
void LearnedAttacks::setFourthAttack(Attack aFourthAttack) { FourthAttack = aFourthAttack; }

unsigned short int LearnedAttacks::getMaxNumberOfAttacks() const { return maxNumberOfAttacks; }
void LearnedAttacks::setMaxNumberOfAttacks(unsigned short int aMaxNumberOfAttacks) { maxNumberOfAttacks = aMaxNumberOfAttacks; }

vector<Attack> LearnedAttacks::getLearnedAttacksVector() const { return learnedAttacksVector; }
void LearnedAttacks::setLearnedAttacksVector(vector<Attack> aLearnedAttacksVector) { learnedAttacksVector = aLearnedAttacksVector; }







