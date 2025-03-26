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

	std::vector<Item*> items = {
		new Item("Potion"),
		new Item("Sword"),
		new Item("Shield")
	};

	player.SetWeapon(spear);
	cout << "Choose a weapon" << endl;
	int weaponChoice;
	//weaponChoice = utilities::choice("Sword", "Spear", "MagicStaff");
	
	//cout << utilities::roll(10, 20);
	
	//player.DisplayInfoWeapon();

	//enemy.DisplayInfo();
	//player.DoDamage(&enemy);
	//enemy.DisplayInfo();
	//player.DisplayInfo();

	Item* selectedItem = items[0]->ItemChoice(items);

	if (selectedItem != nullptr)
	{
		std::cout << "You have selected: " << selectedItem->GetName() << std::endl;
	}

	// Libération de la mémoire
	for (Item* item : items)
	{
		delete item;
	}
	
	return 0;
}
