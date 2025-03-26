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

string Character::WeaponEnumToString(WeaponEnum weapon)
{
	switch (weapon)
	{
	case WeaponEnum::Sword:
		return "Sword";
		break;
	case WeaponEnum::Spear:
		return "Spear";
		break;
	case WeaponEnum::MagicStaff:
		return "MagicStaff";
		break;
	default:
		break;
	}
}

void Character::TakeDamage(Character enemies)
{
	mHealth -= enemies.mWeapon.mDamage;
	if (mHealth <= 0) {
		cout << "Dead" << endl;
	}
}

void Character::DoDamage(Character* enemy)
{
	enemy->mHealth -= mWeapon.mDamage;
	if (enemy->mHealth <= 0) {
		cout << "EnemyDead" << endl;
	}
}




Character::Character() :
	mHealth{ 10 },
	mAbility{ AbilityEnum::Dexterity },
	mCoins{ Roll(50,100) },
	isDead{ false }

{
}

Character::Character(string name, Weapon weapon) :
	Character()
{
	mName = name;
	mWeapon = weapon;
	totalEverCreated++;
	currentlyLiving++;
}

Character::~Character()
{
	currentlyLiving--;

}

WeaponEnum Character::GetWeapon()
{
	return mWeaponEnum;
}

AbilityEnum Character::GetAbility()
{
	return mAbility;
}

void Character::SetWeapon(Weapon weapon)
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
	cout << "-Weapon- : " << mWeapon.GetName() << endl;
}

void Character::DisplayInfoWeapon()
{
	mWeapon.DisplayInfo();
}


