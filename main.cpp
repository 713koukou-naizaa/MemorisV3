#include <iostream>
#include"Character.h"

using std::cout;
using std::endl;

int main()
{
	// attacks creations
	Attack FirstTestAttack("FirstTestAttack", 10, 10);
	Attack SecondTestAttack("SecondTestAttack", 20, 20);
	Attack ThirdTestAttack("ThirdTestAttack", 30, 30);
	Attack FourthTestAttack("FourthTestAttack", 40, 40);

	Character FirstCharacter("FirstCharacter", 200, 200,
		0.57, 0.5, 0.6, 0.4,
		FirstTestAttack, SecondTestAttack, ThirdTestAttack, FourthTestAttack);
	Character SecondCharacter("SecondCharacter", 150, 150,
		0.7, 0.3, 0.4, 0.6,
		FirstTestAttack, SecondTestAttack, ThirdTestAttack, FourthTestAttack);

	FirstCharacter.dealDamages(SecondCharacter, FirstTestAttack);

	return 0;
}








