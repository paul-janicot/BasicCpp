// Basic C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
using std::cout;
using std::endl;
using std::cin;

using std::string;

//Function

void Choice(string firstChoice, string secondChoice, string thirdChoice) {

    cout << "1: " << firstChoice << " 2: " << secondChoice << " 3 : " << thirdChoice << endl;

    int classe = 0;
    cin >> classe;

    switch (classe)
    {
    case 1:
        cout << firstChoice;
        break;
    case 2:
        cout << secondChoice;
        break;
    case 3:
        cout << thirdChoice;
        break;
    default:
        cout << "Not valid" << endl;
        break;
    }

}


int main()
{

    srand(time(NULL));
    
    string narratorName = "The narrator";

    cout << "Hello I am" << narratorName << "\n and you ?" << endl;

    string playerName;
   // cin >> playerName;

    cout << playerName;


    int firstDice = ((std::rand() % 6) + 1);
    cout << firstDice;

    cout << &firstDice;

    string bagOfLoot[5]{ "pen","apple" };
    cout << bagOfLoot[0];

    std::vector<string>myVector(5, "pipou");
    cout << myVector[0] << endl;
    myVector.push_back("loulou");
    cout << myVector[myVector.size() - 1];

    std::map<string, int>abilities
    {
        {"strength", 0},
        {"intelligence", 1},
        {"Dexterity", 0}
    };

    cout << abilities["strength"];

    int choice = 0;

    cout << "1: Thief, 2: Warrior, 3 : Wizard";
    //cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Thief";
        break;
    case 2:
        cout << "Warrior";
        break;
    case 3:
        cout << "Wizard";
        break;
    default:
        cout << "Not valid" << endl;
        break;
    }



 






    for (string i: bagOfLoot) {
        cout << i << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << bagOfLoot[i] << endl;
    }

    for (std::pair<const string, int>& ability : abilities) {
       // cout << ability.first << ":" << ability.second << endl;
    }

    int answer = 0;
    do {
        
        cout << "Enter 1";
        cin >> answer;
        
    } while (answer != 1);


    Choice("A", "B", "X");


    return 0;
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
