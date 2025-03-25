#include "Character.h"




int main() 
{
	/*Character boby("boby");
	boby.DisplayInfo();
	boby.SetAbility(AbilityEnum::Intelligence);
	boby.SetWeapon(WeaponEnum::MagicStaff);
	boby.~Character();
	boby.DisplayInfo();

	cout << Character::currentlyLiving << endl;
	*/
	//Start of the game

	cout << "Hello Traveler ! What's your name ?" << endl;
	string name;
	cin >> name;
	Character player(name);
	cout << "Choose a weapon" << endl;
	int weaponChoice;
	weaponChoice = utilities::choice("Sword", "Spear", "MagicStaff");
	cout << weaponChoice << endl;
	cout << utilities::roll(10, 20);
	return 0;
}
