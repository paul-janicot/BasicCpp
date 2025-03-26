#pragma once
#include "Item.h"

class Weapon: public Item 
{
public :
	int mDamage;	

public:
	Weapon();
	Weapon(std::string mNameWeapon, int mDamageWeapon);
	~Weapon();
	void DisplayInfo();
};

