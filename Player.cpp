#include "Player.h"

using std::cout;
using std::endl;

// PLAYER CLASS DEFINITIONS
// copy constructor
Player::Player(const Player& aOriginalPlayer) :
	playerUsername(aOriginalPlayer.playerUsername), PlayerEntity(aOriginalPlayer.PlayerEntity)
{ };
// default constructor
Player::Player() // determine default values /!\ NOT NECESSARY?
{
	(*this).playerUsername = "defaultPlayerUsername";
	(*this).PlayerEntity = Entity();
};
// parameterized constructor
Player::Player(string aPlayerUsername, Entity aPlayerEntity) :
	playerUsername(aPlayerUsername), PlayerEntity(aPlayerEntity)
{ };

// GETTERS & SETTERS
string Player::getPlayerUsername() const { return (*this).playerUsername; }
void Player::setPlayerUsername(string aNewUsername) { (*this).playerUsername = aNewUsername; }

Entity Player::getPlayerEntity() const { return (*this).PlayerEntity; }
void Player::setPlayerEntity(Entity aNewPlayerEntity) { (*this).PlayerEntity = aNewPlayerEntity; }




