#pragma once
#include<string>
#include<iostream>
#include<random>
#include "AbilityEnum.h"
#include "WeaponEnum.h"
#include"utilities.h"
#include "Item.h"
#include "Weapon.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;


class Character
{
private:
	float mHealth;
	AbilityEnum mAbility;
	int mCoins;
	WeaponEnum mWeaponEnum;
	Weapon mWeapon;
	string mName;
	bool isDead;



public:
	static int totalEverCreated;
	static int currentlyLiving;
	Character();
	Character(string name, Weapon weapon);
	~Character();
	WeaponEnum GetWeapon();
	AbilityEnum GetAbility();
	void SetWeapon(Weapon weapon);
	void SetAbility(AbilityEnum ability);
	void DisplayInfo();
	void DisplayInfoWeapon();
	int Roll(int minNumber, int maxNumber);
	string AbilityEnumToString(AbilityEnum Ability);
	string WeaponEnumToString(WeaponEnum Ability);
	void TakeDamage(Character enemies);
	void DoDamage(Character* enemy);
};

