#include "Weapon.h"

Weapon::Weapon()
{
	mDamage = 10;
}

Weapon::Weapon(std::string mNameWeapon, int mDamageWeapon)
{
	mDamage = mDamageWeapon;
	mName = mNameWeapon;
}

Weapon::~Weapon()
{
}

void Weapon::DisplayInfo()
{
	std::cout << "Name id : " << mName << std::endl;
	std::cout << mId << std::endl;
	std::cout << mDamage << std::endl;
	
	
}
