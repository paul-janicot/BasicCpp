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
	Weapon spear("Spear", 6);
	Weapon sword("Sword", 5);
	Character player(name, spear);
	Character enemy("enemy", sword);
	player.SetWeapon(spear);
	cout << "Choose a weapon" << endl;
	int weaponChoice;
	//weaponChoice = utilities::choice("Sword", "Spear", "MagicStaff");
	spear.ItemChoice(spear);
	cout << weaponChoice << endl;
	cout << utilities::roll(10, 20);
	
	player.DisplayInfoWeapon();

	enemy.DisplayInfo();
	player.DoDamage(&enemy);
	enemy.DisplayInfo();
	player.DisplayInfo();


	
	return 0;
}
