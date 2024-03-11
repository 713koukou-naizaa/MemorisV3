#include "Player.h"

using std::cout;
using std::cin;
using std::endl;

// PLAYER CLASS DEFINITIONS
// copy constructor
Player::Player(const Player& aOriginalPlayer) :
	playerUsername(aOriginalPlayer.playerUsername),
	PlayerEntity(aOriginalPlayer.PlayerEntity)
{ };
// default constructor
Player::Player() // determine default values /!\ NOT NECESSARY?
{
	this->playerUsername = "defaultPlayerUsername";
	this->PlayerEntity = Entity();
};
// parameterized constructor
Player::Player(string aPlayerUsername, Entity aPlayerEntity) :
	playerUsername(aPlayerUsername),
	PlayerEntity(aPlayerEntity)
{ };

// GETTERS & SETTERS
string Player::getPlayerUsername() const { return this->playerUsername; }
void Player::setPlayerUsername(string aNewUsername) { this->playerUsername = aNewUsername; }

Entity Player::getPlayerEntity() const { return this->PlayerEntity; }
void Player::setPlayerEntity(Entity aNewPlayerEntity) { this->PlayerEntity = aNewPlayerEntity; }

// PLAYER FUNCTIONS
void Player::chooseUsername()
{
	string chosenUsername;
	cout << "Please choose your username : ";
	cin >> chosenUsername;
	this->setPlayerUsername(chosenUsername);
}

void Player::chooseEntityName()
{
	string chosenName;
	cout << "Please choose your name : ";
	cin >> chosenName;
	this->PlayerEntity.setEntityName(chosenName);
}

void Player::adjustEntityStats()
{
	this->PlayerEntity.setEntityMaxHealthPoints(this->PlayerEntity.getEntityRace().getRaceBaseHealthPoints());
	this->PlayerEntity.setEntityHealthPoints(this->PlayerEntity.getEntityMaxHealthPoints());
	this->PlayerEntity.setEntitySpeed(this->PlayerEntity.getEntityRace().getRaceBaseSpeed());	
	this->PlayerEntity.setEntityPhysicalStrength(this->PlayerEntity.getEntityRace().getRaceBasePhysicalStrength());
	this->PlayerEntity.setEntityMagicalStrength(this->PlayerEntity.getEntityRace().getRaceBaseMagicalStrength());
	this->PlayerEntity.setEntityPhysicalDefense(this->PlayerEntity.getEntityRace().getRaceBasePhysicalDefense());
	this->PlayerEntity.setEntityMagicalDefense(this->PlayerEntity.getEntityRace().getRaceBaseMagicalDefense());
}

void Player::initializePlayerEntity(const vector<Race> aPlayableRaces, const LearnedAttacks aPlayerLearnedAttacks)
{
	short unsigned int raceChoice;
	this->chooseUsername();
	this->chooseEntityName();
	cout << "Now please choose your race :" << endl;
	displayPlayableRaces(aPlayableRaces);
	cin >> raceChoice;
	this->PlayerEntity.setEntityRace(aPlayableRaces[raceChoice - 1]);
	this->adjustEntityStats();
	this->PlayerEntity.setEntityLearnedAttacks(aPlayerLearnedAttacks);

}

