#include<iostream>
#include "Fight.h"

using std::cout;
using std::endl;

// FIGHT CLASS DEFINITIONS
// copy constructor
Fight::Fight(const Fight& aOriginalFight) :
	FightPlayer(aOriginalFight.FightPlayer), Ennemies(aOriginalFight.Ennemies), roundNumber(aOriginalFight.roundNumber)
{ };
// default constructor
Fight::Fight() // determine default values /!\ NOT NECESSARY?
{ };
// initializer list constructor
Fight::Fight(Entity aFightPlayer, vector<Entity> aEnnemies, unsigned int aRoundNumber) :
	FightPlayer(aFightPlayer), Ennemies(aEnnemies), roundNumber(aRoundNumber)
{ };

// GETTERS & SETTERS
Entity Fight::getPlayer() const { return (*this).FightPlayer; }
void Fight::setPlayer(Entity aNewFightPlayer) { (*this).FightPlayer = aNewFightPlayer; }

vector <Entity> Fight::getEnnemies() const { return (*this).Ennemies; }
void Fight::setEnnemies(vector <Entity> aNewEnnemies) { (*this).Ennemies = aNewEnnemies; }

unsigned int Fight::getRoundNumber() const { return (*this).roundNumber; }
void Fight::setRoundNumber(unsigned int aNewRoundNumber) { (*this).roundNumber = aNewRoundNumber; }






