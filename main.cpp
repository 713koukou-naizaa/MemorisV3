#include <iostream>
#include<vector>
#include"Player.h"
#include"Fight.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;

// GAME FUNCTIONS DECLARATIONS

// initialize the game (parameters needed at the start of the game)
void initializeGame(Player&, const vector<Race>, const LearnedAttacks);
// function running the game
void runGame(Player& aUserPlayer, Entity& aEnnemy, Fight& aFight);

int main()
{
	// attacks creations
	Attack FirstAttack("First attack", true, 0, 0, 10);
	Attack SecondAttack("Second attack", false, 10, 0, 0);
	Attack ThirdAttack("Third attack", false, 0, 10, 0);
	Attack FourthAttack("Fourth attack", false, 10, 10, 0);
	Attack FifthAttack("Fifth attack", false, 20, 0, 0);
	Attack SixthAttack("Sixth attack", false, 0, 20, 0);
	Attack SeventhAttack("Seventh attack", false, 20, 20, 0);

	// available attacks creations
	vector<Attack>elvesAttacks({ FirstAttack, SecondAttack, ThirdAttack, FourthAttack });
	vector<Attack>humansAttacks({ FourthAttack , FifthAttack, SixthAttack, SeventhAttack });

	// learned attacks creations
	vector<Attack>playerLearnedAttacksVector({ FirstAttack, SecondAttack, ThirdAttack, FourthAttack });
	LearnedAttacks playerLearnedAttacks(FirstAttack, SecondAttack, ThirdAttack, FourthAttack);
	vector<Attack>elfEnnemyLearnedAttacksVector({ FourthAttack, FifthAttack, SixthAttack, SeventhAttack });
	LearnedAttacks elfEnnemyLearnedAttacks(FourthAttack, FifthAttack, SixthAttack, SeventhAttack);

	// races creations
	Race Elf("Elf", 200, 30, 4, 7, 3, 8, elvesAttacks);
	Race Human("Human", 100, 20, 3, 5, 6, 4, humansAttacks);

	// vector containing all playable races
	vector<Race>playableRaces({ Elf, Human });

	// user creation
	Player UserPlayer("defaultPlayerUsername", Entity());

	// ennemies creations
	Entity ElfEnnemy("Elf ennemy", Elf, elfEnnemyLearnedAttacks);

	// placerHolderFight
	Fight placeHolderFight(UserPlayer.getPlayerEntity(), ElfEnnemy);
	

	initializeGame(UserPlayer, playableRaces, playerLearnedAttacks);

	runGame(UserPlayer, ElfEnnemy, placeHolderFight);


	
	return 0;
}

// GAME FUNCTIONS DEFINITIONS

void initializeGame(Player& aUserPlayer, const vector<Race> aPlayableRaces, const LearnedAttacks aPlayerLearnedAttacks)
{
	cout << "Welcome to Memoris V3 !" << endl;
	aUserPlayer.initializePlayerEntity(aPlayableRaces, aPlayerLearnedAttacks);
}

void runGame(Player& aUserPlayer, Entity& aEnnemy, Fight& aFight)
{
	aFight.runFight(aUserPlayer.getPlayerEntity(), aEnnemy);
}



