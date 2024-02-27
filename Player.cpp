#include "Player.h"

using std::cout;
using std::endl;

// PLAYER CLASS DEFINITIONS
// copy constructor
Player::Player(const Player& aOriginalPlayer) :
	username(aOriginalPlayer.username), PlayerEntity(aOriginalPlayer.PlayerEntity)
{ };
// default constructor
Player::Player() // determine default values /!\ NOT NECESSARY?
{ };
// parameterized constructor
Player::Player(string aUsername, Entity aPlayerEntity) :
	username(aUsername), PlayerEntity(aPlayerEntity)
{ };

// GETTERS & SETTERS
string Player::getUsername() const { return (*this).username; }
void Player::setUsername(string aNewUsername) { (*this).username = aNewUsername; }

Entity Player::getChosenEntity() const { return (*this).PlayerEntity; }
void Player::setChosenEntity(Entity aNewPlayerEntity) { (*this).PlayerEntity = aNewPlayerEntity; }

// USER FUNCTIONS
void Player::displayProperties()
{
	cout << "Here is your username and your character's stats :\n" << endl;
	cout << "Username : " << (*this).getName() << endl;
	cout << "Character : " << endl;
	(*this).getChosenEntity().displayStats();
}




