#include "Item.h"

Item::Item()
{
	mName = "Potion";
	mId = 10;
}
Item::Item(std::string name):
	mName{name},mId{10}
{
}

Item::~Item()
{
}

std::string Item::GetName() const	
{
	return mName;
}

Item* Item::ItemChoice(std::vector<Item*> items)
{
	while (true)
	{

	for (int i = 0; i < items.size();i++)
	{
		std::cout << i+1 << ": " << items[i]->GetName() << std::endl;
	}
	int choice = 0;
	std::cout << "Please enter a number";
	std::cin >> choice;
	if (std::cin.fail())
	{
		std::cin.clear(); // Réinitialise l'état de cin
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore la mauvaise entrée
		std::cout << "Invalid input! Please enter a number." << std::endl;
		continue;
	}
	if (choice >= 1 && choice <= items.size()) {
		return items[choice - 1];
	}
	else {
		std::cout << "Not a valid choice. Please select a number between 1 and " << items.size() << "." << std::endl;
	}
	
}
}
