#pragma once

#include<iostream>
#include<vector>
#include"Attack.h"

using std::vector;

class LearnedAttacks
{
private:
	Attack FirstAttack;
	Attack SecondAttack;
	Attack ThirdAttack;
	Attack FourthAttack;
	unsigned short int maxNumberOfAttacks = 4;
	vector<Attack>learnedAttacksVector{ FirstAttack,SecondAttack,ThirdAttack,FourthAttack };

public:
	// copy constructor
	LearnedAttacks(const LearnedAttacks&);
	// default constructor
	LearnedAttacks(); // determine default values /!\ NOT NECESSARY?
	// parameterized constructor
	LearnedAttacks(Attack, Attack, Attack, Attack,
		unsigned short int,
		vector<Attack>);

	// GETTERS & SETTERS declarations
	Attack getFirstAttack() const;
	void setFirstAttack(Attack);

	Attack getSecondAttack() const;
	void setSecondAttack(Attack);

	Attack getThirdAttack() const;
	void setThirdAttack(Attack);

	Attack getFourthAttack() const;
	void setFourthAttack(Attack);

	unsigned short int getMaxNumberOfAttacks() const;
	void setMaxNumberOfAttacks(unsigned short int);

	vector<Attack> getLearnedAttacksVector() const;
	void setLearnedAttacksVector(vector<Attack>);



};

