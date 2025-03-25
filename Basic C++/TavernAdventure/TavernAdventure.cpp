#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <random>

using std::cout;
using std::endl;
using std::cin;

using std::string;
using namespace std;

//Function

int Choice(string firstChoice, string secondChoice, string thirdChoice) {

    while (true)
    {
        cout << "1: " << firstChoice << " 2: " << secondChoice << " 3 : " << thirdChoice << endl;

        int classe = 0;
        cin >> classe;




        switch (classe)
        {
        case 1:
            cout << firstChoice << endl;
            return 1;
            break;
        case 2:
            cout << secondChoice << endl;
            return 2;
            break;
        case 3:
            cout << thirdChoice << endl;
            return 3;
            break;
        default:
            cout << "Not valid" << endl;
            continue;
        }
    }

}
int Roll(int minNumber, int maxNumber) {
    random_device rd;
    mt19937_64 gen(rd());
    uniform_int_distribution<> distrib(minNumber, maxNumber);
    return distrib(gen);

}


int main()
{

    srand(time(NULL));
    int drink = 0;
    bool isAsleep = false;
    int money = Roll(100, 200);
    cout << "Welcome to the tavern traveler ! \nplease choose a drink" << endl << "You have " << money << " coins" << endl;
    drink = Choice("Beer", "Apple Cider", "La gnole de Papi");

    switch (drink)
    {
    case 1:
        cout << "Nice choice traveler ! Here is your beer" << endl;
        break;
    case 2:
        cout << "Ahah ! Here is your weak Apple Cider" << endl;
        break;
    case 3:
        cout << "Damn good luck with that...";
        break;
        isAsleep = true;
    default:
        break;
    }

    if (isAsleep) {
        money -= 50;
        cout << "You fall asleep right after the first sip..." << endl << "To bad for you a fardadet malicieux just steal you " << 50 << " coins." << endl;
        cout << "You have " << money << " golds left";
        isAsleep = false;

    }

    cout << "Drink Time is over... Go on an adventure now ! Who are you ?" << endl << "Enter a pseudo: " << endl;
    string pseudo = "";
    cin >> pseudo;
    cout << "Well Hello " << pseudo << " ! You can choose your class now" << endl;
    int classe = Choice("Warrior", "Thief", "Wizard");

    std::map<string, int> abilities;

    abilities["strength"] = 0;
    abilities["inteligence"] = 0;
    abilities["dexterity"] = 0;

    switch (classe)
    {
    case 1:
        cout << "You choose the Warrior !";
        abilities["strength"] = Roll(15, 20);
        abilities["inteligence"] = Roll(0, 10);
        abilities["dexterity"] = Roll(10, 15);
        break;
    case 2:
        cout << "You choose the Thief !";
        abilities["strength"] = Roll(10, 15);
        abilities["inteligence"] = Roll(10, 15);
        abilities["dexterity"] = Roll(10, 15);
        break;

    case 3:
        cout << "You choose the Wizard !";
        abilities["strength"] = Roll(0, 10);
        abilities["inteligence"] = Roll(15, 20);
        abilities["dexterity"] = Roll(10, 12);
        break;


    default:
        break;
    }

    cout << "This is your abilities: " << endl;
    for (std::pair<const string, int>& ability : abilities) {
        cout << ability.first << ":" << ability.second << endl;
    }


    return 0;
}