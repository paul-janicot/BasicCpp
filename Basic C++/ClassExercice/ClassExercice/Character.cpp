#include "Character.h"
#include<random>

int Character::Roll(int minNumber, int maxNumber)
{
	std::random_device rd;
	std::mt19937_64 gen(rd());
	std::uniform_int_distribution<> distrib(minNumber, maxNumber);
	return distrib(gen);

}

Character::Character()
{
	mHealth = 10;
	mAbility = "warrior";
	mCoins = 100;
	mWeapon = "Sword";
}

Character::Character(string name) {
	mHealth = 10;
	mAbility = "warrior";
	mCoins = Roll(50,100);
	mWeapon = "Sword";
	mName = name;

}

Character::~Character()
{
}

string Character::GetWeapon()
{
	return mWeapon;
}

string Character::GetAbility()
{
	return mAbility;
}

void Character::SetWeapon(string weapon)
{
	mWeapon = weapon;
}

void Character::DisplayInfo()
{
	cout << "---Info---" << endl;
	cout << "-Name- : " << mName << endl;
	cout << "-Health- : " << mHealth << endl;
	cout << "-Ability- : " << mAbility << endl;
	cout << "-Coins- : " << mCoins << endl;
	cout << "-Weapon- : " << mWeapon << endl;
}


