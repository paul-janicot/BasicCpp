#pragma once
#include<string>
#include<iostream>
#include<random>

using std::string;
using std::cout;
using std::endl;
using std::cin;


class Character
{
private:
	float mHealth;
	string mAbility;
	int mCoins;
	string mWeapon;
	string mName;



public:
	Character();
	Character(string name);
	~Character();
	string GetWeapon();
	string GetAbility();
	void SetWeapon(string weapon);
	void DisplayInfo();
	int Roll(int minNumber, int maxNumber);
};

