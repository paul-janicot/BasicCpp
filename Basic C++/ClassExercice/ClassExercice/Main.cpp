#include "Character.h"




int main() 
{
	Character boby("boby");
	boby.DisplayInfo();
	boby.SetAbility(AbilityEnum::Intelligence);
	return 0;
}
