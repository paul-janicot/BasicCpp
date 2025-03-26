#pragma once
#include <string>
#include <iostream>
#include <vector>

class Item
{
protected:
	std::string mName;
	int mId;

public:
	Item();
	Item(std::string name);
	~Item();
	std::string GetName() const ;
	Item* ItemChoice(std::vector<Item*> items);
};

