#include <iostream>
#include"Character.h"

using std::cout;
using std::endl;

int main()
{
	Character FirstCharacter("FirstCharacter", 200, 50, 0.3);
	Character SecondCharacter("SecondCharacter", 150, 60, 0.4);

	FirstCharacter.dealDamages(SecondCharacter);

	return 0;
}








