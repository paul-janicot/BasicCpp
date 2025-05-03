#include "Character.h"




int main() 
{
	/*Character boby("boby",WeaponEnum::Spear);
	boby.DisplayInfo();
	boby.SetAbility(AbilityEnum::Intelligence);
	boby.SetWeapon(WeaponEnum::MagicStaff);
	boby.~Character();
	boby.DisplayInfo();

	cout << Character::currentlyLiving << endl;*/
	
	//Start of the game

	cout << "Hello Traveler ! What's your name ?" << endl;
	string name;
	cin >> name;
	Weapon spear("Spear", 6);
	Weapon sword("Sword", 5);
	Weapon magicStaff("MagicStaff", 7);
	Character player(name, spear, 25);
	

	cout << "Hello " << name << " I'm happy to meet you ! " << endl;
	cout << "You should take a weapon. We live in a dangerous world..." << endl;

	cout << "Choose a weapon" << endl;
	int weaponChoice;

	weaponChoice = utilities::choice("Sword", "Spear", "MagicStaff");
	cout << weaponChoice << endl;

	switch (weaponChoice) {
	case 1:
		player.SetWeapon(sword);
		break;
	case 2:
		player.SetWeapon(spear);
		break;
	case 3:
		player.SetWeapon(magicStaff);
		break;
	}

	cout << "Nice choice ! Go explore the world now !" << endl;
	cout << "Here are the informations about your character :" << endl;

	player.DisplayInfo();

	cout << "Where do you want to go ?" << endl;
	int path = utilities::choice("Forest", "Cave", "Beach");

	switch (path)
	{
	case 1: {
		  int coinsChest = utilities::roll(30, 90);
		  player.AddCoins(coinsChest);
		  cout << "You encounter a chest ! you get " << coinsChest << " coins" << endl;
		  cout << "You now have " << player.GetCoins() << " coins " << endl;
		  break;
	}
	case 2: {
		int coinsChest2 = utilities::roll(10, 150);
		player.AddCoins(coinsChest2);
		cout << "You find a bag full of golds ! you get " << coinsChest2 << " coins" << endl;
		cout << "You now have " << player.GetCoins() << " coins " << endl;
		break;
	}
	case 3: {


		int coinsChest3 = utilities::roll(100, 200);
		player.AddCoins(coinsChest3);
		cout << "You find a shipwreck with lot of treasure inside ! you get " << coinsChest3 << " coins" << endl;
		cout << "You now have " << player.GetCoins() << " coins " << endl;
		break;
	}
	}

	cout << "Hello traveler ! Welcome to my Shop ! What can I get to you ?" << endl;

	int shopItem = utilities::choice("Potion : 20 coins", "Shield : 30 coins", "Apple : 10 coins");

	switch (shopItem) 
	{
	case 1:
		player.AddCoins(-20);
		cout << "You now have " << player.GetCoins() << " coins " << endl;
		break;
	case 2:
		player.AddCoins(-30);
		cout << "You now have " << player.GetCoins() << " coins " << endl;
		break;
	case 3:
		player.AddCoins(-10);
		cout << "You now have " << player.GetCoins() << " coins " << endl;
		break;
	}

	cout << "Thanks ! Go back to your journey now :)" << endl;

	cout << "You encounter a malicious goblin !! Time to fight" << endl;

	Character goblin("goblin", sword, 12);

	

	while (goblin.GetHealth() > 0) {
		int goblinChoice = utilities::choice("Attack", "Defend", "Run Away");
		switch (goblinChoice) {
		case 1:
			cout << "You attack the goblin." << endl;
			player.DoDamage(&goblin);
			cout << "He now has " << goblin.GetHealth() << " HP" << endl;
			break;
		}
	}


	/*std::vector<Item*> items = {
		new Item("Potion"),
		new Item("Sword"),
		new Item("Shield")
	};

	Item* selectedItem = items[0]->ItemChoice(items);

	if (selectedItem != nullptr)
	{
		std::cout << "You have selected: " << selectedItem->GetName() << std::endl;
	}*/

	//enemy.DisplayInfo();
	//player.DoDamage(&enemy);
	//enemy.DisplayInfo();
	//player.DisplayInfo();

	

	//// Libération de la mémoire
	//for (Item* item : items)
	//{
	//	delete item;
	//}
	//
	return 0;
}
