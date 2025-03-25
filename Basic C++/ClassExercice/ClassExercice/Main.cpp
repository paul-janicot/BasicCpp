#include "Character.h"




int main() 
{
	Character boby("boby");
	boby.DisplayInfo();
	boby.SetAbility(AbilityEnum::Intelligence);

	boby.~Character();

	cout << Character::currentlyLiving << endl
		;


	return 0;
}
