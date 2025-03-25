#pragma once
#include<string>
#include<iostream>
#include<random>
#include "AbilityEnum.h"
#include "WeaponEnum.h"
#include"utilities.h"

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
	WeaponEnum mWeapon;
	string mName;



public:
	static int totalEverCreated;
	static int currentlyLiving;
	Character();
	Character(string name);
	~Character();
	WeaponEnum GetWeapon();
	AbilityEnum GetAbility();
	void SetWeapon(WeaponEnum weapon);
	void SetAbility(AbilityEnum ability);
	void DisplayInfo();
	int Roll(int minNumber, int maxNumber);
	string AbilityEnumToString(AbilityEnum Ability);
	string WeaponEnumToString(WeaponEnum Ability);
};

