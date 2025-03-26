#include "Item.h"

Item::Item()
{
	mName = "Potion";
	mId = 1;
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
	for (int i = 0; i < items.size();i++)
	{
		std::cout << i << ": " << items[i];
	}
	return nullptr;
}

