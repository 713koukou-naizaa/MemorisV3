#include <iostream>
#include<vector>
#include"Player.h"
#include"Race.h"

using std::cout;
using std::endl;
using std::cin;§
using std::vector;

// GAME FUNCTIONS DECLARATIONS
// display the stats of the playable characters 
void displayPlayableCharacters(const vector<Entity>);
// returns the username the user chose
string chooseUsername();
// returns the character the user chose
Entity characterSelection(const vector<Entity>);
// initialize the game (parameters needed at the start of the game)
void initializeGame(Player&, const vector<Entity>);

int main()
{
	// player creation
	Player DefaultUser;

	// attacks creations
	Attack FirstTestAttack("FirstTestAttack", 10, 10);
	Attack SecondTestAttack("SecondTestAttack", 20, 20);
	Attack ThirdTestAttack("ThirdTestAttack", 30, 30);
	Attack FourthTestAttack("FourthTestAttack", 40, 40);

	// playable characters creations
	Entity FirstCharacter("FirstCharacter", 200, 200,
		0.57, 0.5, 0.6, 0.4,
		FirstTestAttack, SecondTestAttack, ThirdTestAttack, FourthTestAttack);
	Entity SecondCharacter("SecondCharacter", 150, 150,
		0.7, 0.3, 0.4, 0.6,
		FirstTestAttack, SecondTestAttack, ThirdTestAttack, FourthTestAttack);

	// ennemies creations
	Entity FirstEnnemy("FirstEnnemy", 100, 100,
		0.6, 0.3, 0.7, 0.3, FirstTestAttack, SecondTestAttack, ThirdTestAttack, FourthTestAttack);

	// vector containing all playable characters
	vector<Entity>PlayableCharacters({ FirstCharacter, SecondCharacter });


	// FirstCharacter.dealDamages(SecondCharacter, FirstTestAttack);
	// FirstCharacter.displayAttacksNames();

	initializeGame(DefaultUser, PlayableCharacters);

	return 0;
}

// GAME FUNCTIONS DEFINITIONS
void displayPlayableCharacters(const vector<Entity> aPlayableCharacters)
{
	unsigned int vectorSize = aPlayableCharacters.size();
	for (unsigned short int index = 0; index < vectorSize; index++)
	{
		cout << "[" << index+1 << "]" << endl;
		aPlayableCharacters[index].displayStats();
	}
}

string chooseUsername()
{
	string chosenUsername;
	cout << "Please choose your username : ";
	cin >> chosenUsername;
	return chosenUsername;
}

Entity characterSelection(const vector<Entity> aPlayableCharacters)
{
	// the number of the character the user chose
	unsigned short int characterChoice;
	cout << "Now please chooe you character :\n" << endl;
	displayPlayableCharacters(aPlayableCharacters);
	cout << "Character number : ";
	cin >> characterChoice;
	cout << endl;

	switch (characterChoice)
	{
	case 1:
		return aPlayableCharacters[0];
		break;
	case 2:
		return aPlayableCharacters[1];
		break;
	default:
		cout << "Error : invalid character choice, please retry" << endl;
		characterSelection(aPlayableCharacters);
	}
}

void initializeGame(Player& aDefaultPlayer, const vector<Entity> aPlayableCharacters)
{
	cout << "Welcome to MemorisV3" << endl;
	aDefaultPlayer.setName(chooseUsername());
	aDefaultPlayer.setChosenEntity(characterSelection(aPlayableCharacters));
	aDefaultPlayer.displayProperties();
}






