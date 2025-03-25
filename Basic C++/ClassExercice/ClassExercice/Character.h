#pragma once
#include<string>
#include<iostream>
#include<random>
#include "AbilityEnum.h"

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
	string mWeapon;
	string mName;



public:
	Character();
	Character(string name);
	~Character();
	string GetWeapon();
	AbilityEnum GetAbility();
	void SetWeapon(string weapon);
	void SetAbility(AbilityEnum ability);
	void DisplayInfo();
	int Roll(int minNumber, int maxNumber);
	string AbilityEnumToString(AbilityEnum Ability);
};

