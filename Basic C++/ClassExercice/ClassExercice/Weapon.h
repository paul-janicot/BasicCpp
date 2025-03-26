#pragma once
#include "Item.h"

class Weapon:  Item 
{
protected :
	int mDamage;	

public:
	Weapon();
	Weapon(std::string mNameWeapon, int mDamageWeapon);
	~Weapon();
	void DisplayInfo();
};

