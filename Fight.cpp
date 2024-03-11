#include<iostream>
#include "Fight.h"

using std::cout;
using std::endl;
using std::cin;

// FIGHT CLASS DEFINITIONS
// copy constructor
Fight::Fight(const Fight& aOriginalFight) :
	FightPlayer(aOriginalFight.FightPlayer), Ennemy(aOriginalFight.Ennemy),
	roundNumber(aOriginalFight.roundNumber) { };
// default constructor
Fight::Fight() { };
// initializer list constructor
Fight::Fight(Entity aFightPlayer, Entity aEnnemy) :
	FightPlayer(aFightPlayer), Ennemy(aEnnemy) { };

// GETTERS & SETTERS
Entity Fight::getPlayer() const { return this->FightPlayer; }
void Fight::setPlayer(Entity aNewFightPlayer) { this->FightPlayer = aNewFightPlayer; }

Entity Fight::getEnnemy() const { return this->Ennemy; }
void Fight::setEnnemy(Entity aNewEnnemy) { this->Ennemy = aNewEnnemy; }

unsigned int Fight::getRoundNumber() const { return this->roundNumber; }
void Fight::setRoundNumber(unsigned int aNewRoundNumber) { this->roundNumber = aNewRoundNumber; }

string Fight::getWinnerName() const { return this->winnerName; }
void Fight::setWinnerName(string aNewWinnerName) { this->winnerName = aNewWinnerName; }

unsigned short int Fight::getWhoseTurn() const { return this->whoseTurn; }
void Fight::setWhoseTurn(unsigned short int aNewWhoseTurn) { this->whoseTurn = aNewWhoseTurn; }

// FIGHT FUNCTIONS

void Fight::determineWhoseTurn(Entity& aFightPlayer, Entity& aEnnemy)
{
	if(aFightPlayer.getEntitySpeed() == aEnnemy.getEntitySpeed())
	{
		this->setWhoseTurn(1); // rand?
	}
	else if (aFightPlayer.getEntitySpeed() > aEnnemy.getEntitySpeed())
	{
		this->setWhoseTurn(1);
	}
	else
	{
		this->setWhoseTurn(2);
	}
}
void Fight::runFight(Entity aFightPlayerEntity, Entity& aEnnemy)
{
	// fight initialization
	this->fightInitialization(aFightPlayerEntity, aEnnemy);
	// fight loop
	this->fightLoop(aFightPlayerEntity, aEnnemy);
}

void Fight::fightInitialization(Entity& aFightPlayerEntity, Entity& aEnnemy)
{
	cout << "Starting fight between " << aFightPlayerEntity.getEntityName() << " and " << aEnnemy.getEntityName() << endl;
	this->determineWhoseTurn(aFightPlayerEntity, aEnnemy);
}

void Fight::fightRound(Entity& aFightPlayerEntity, Entity& aEnnemy)
{
	this->playFightTurns(aFightPlayerEntity, aEnnemy);
	this->playFightTurns(aFightPlayerEntity, aEnnemy);
}

void Fight::fightLoop(Entity& aFightPlayerEntity, Entity& aEnnemy)
{
	// while
	this->fightRound(aFightPlayerEntity, aEnnemy);
}

void Fight::playFightTurns(Entity& aFightPlayerEntity, Entity& aEnnemy)
{
	switch (this->getWhoseTurn())
	{
	case 1:
		this->playEntityAction(aFightPlayerEntity, aEnnemy);
		this->setWhoseTurn(2);
		break;
	case 2:
		this->setWhoseTurn(1);
		break;
	default:
		cout << "ERROR, determineWhoseTurn is " << this->getWhoseTurn()  << ", should be 1 or 2" << endl;
		break;
	}
}

void Fight::playEntityAction(Entity& aFightPlayerEntity, Entity& aEnnemy)
{
	unsigned short int actionChoice;
	cout << "Please choose your action :" << endl;
	cout << "[1] Attack" << endl;
	cout << "[2] Inventory" << endl;
	cout << "[3] Run" << endl;
	cin >> actionChoice;
	switch (actionChoice)
	{
	case 1:
		aFightPlayerEntity.attackChoice(aEnnemy);
		cout << "DEBUG ennemy health points : " << aEnnemy.getEntityHealthPoints() << endl;
		cout << "DEBUG player health points : " << aFightPlayerEntity.getEntityHealthPoints() << endl;
		break;
	case 2:
		aFightPlayerEntity.inventoryChoice(aEnnemy);
		break;
	case 3:
		aFightPlayerEntity.runChoice(aEnnemy);
		break;
	default:
		cout << "ERROR, actionChoice is " << actionChoice << ", should be 1, 2 or 3" << endl;
		break;
	}
}

