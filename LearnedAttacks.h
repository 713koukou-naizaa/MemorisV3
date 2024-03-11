#ifndef LEARNED_ATTACKS_H
#define LEARNED_ATTACKS_H

#include<iostream>
#include<vector>
#include"Attack.h"

using std::vector;

class LearnedAttacks
{
private:
	Attack FirstLearnedAttack;
	Attack SecondLearnedAttack;
	Attack ThirdLearnedAttack;
	Attack FourthLearnedAttack;
	// maximum number of attacks that can be learned at the same time
	unsigned short int maxNumberOfLearnedAttacks = 4;
	// vector containing all learned attacks
	vector<Attack>learnedAttacksVector{
		FirstLearnedAttack,SecondLearnedAttack,
		ThirdLearnedAttack,FourthLearnedAttack };

public:
	// copy constructor
	LearnedAttacks(const LearnedAttacks&);
	// default constructor
	LearnedAttacks();
	// parameterized constructor
	LearnedAttacks(Attack, Attack, Attack, Attack);

	// GETTERS & SETTERS declarations
	Attack getFirstLearnedAttack() const;
	void setFirstLearnedAttack(Attack);

	Attack getSecondLearnedAttack() const;
	void setSecondLearnedAttack(Attack);

	Attack getThirdLearnedAttack() const;
	void setThirdLearnedAttack(Attack);

	Attack getFourthLearnedAttack() const;
	void setFourthLearnedAttack(Attack);

	unsigned short int getMaxNumberOfLearnedAttacks() const;
	void setMaxNumberOfLearnedAttacks(unsigned short int);

	vector<Attack> getLearnedAttacksVector() const;
	void setLearnedAttacksVector(vector<Attack>);

	// LEARNED_ATTACKS FUNCTIONS
	void displayLearnedAttacks() const;
};


#endif