#include "Character.h"
#include<random>

int Character::totalEverCreated = 0;
int Character::currentlyLiving = 0;



int Character::Roll(int minNumber, int maxNumber)
{
	std::random_device rd;
	std::mt19937_64 gen(rd());
	std::uniform_int_distribution<> distrib(minNumber, maxNumber);
	return distrib(gen);

}

string Character::AbilityEnumToString(AbilityEnum Ability)
{
	switch (Ability)
	{
	case AbilityEnum::Strength:
		return "Strength";
		break;
	case AbilityEnum::Intelligence:
		return "Intelligence";
		break;
	case AbilityEnum::Dexterity:
		return "Dexterity";
		break;
	case AbilityEnum::Luck:
		return "Luck";
		break;
	default:
		return "noValid";
		break;
	};
}

Character::Character()
{
	mHealth = 10;
	mAbility = AbilityEnum::Dexterity;
	mCoins = 100;
	mWeapon = "Sword";
	totalEverCreated++;
	currentlyLiving++;
}

Character::Character(string name) :
 mName{ name }
{
	mHealth = 10;
	mAbility = AbilityEnum::Dexterity;
	mCoins = Roll(50,100);
	mWeapon = "Sword";
	totalEverCreated++;
	currentlyLiving++;

}

Character::~Character()
{
	currentlyLiving--;

}

string Character::GetWeapon()
{
	return mWeapon;
}

AbilityEnum Character::GetAbility()
{
	return mAbility;
}

void Character::SetWeapon(string weapon)
{
	mWeapon = weapon;
}

void Character::SetAbility(AbilityEnum ability)
{
	mAbility = ability;
	cout << "your new abilities is " << AbilityEnumToString(mAbility) << endl;
}

void Character::DisplayInfo()
{
	cout << "---Info---" << endl;
	cout << "-Name- : " << mName << endl;
	cout << "-Health- : " << mHealth << endl;
	cout << "-Ability- : " << AbilityEnumToString(mAbility) << endl;
	cout << "-Coins- : " << mCoins << endl;
	cout << "-Weapon- : " << mWeapon << endl;
}


