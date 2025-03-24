#include <iostream>
#include <string>
#include <vector>
#include <map>
using std::cout;
using std::endl;
using std::cin;

using std::string;

//Function

int Choice(string firstChoice, string secondChoice, string thirdChoice) {

    cout << "1: " << firstChoice << " 2: " << secondChoice << " 3 : " << thirdChoice << endl;

    int classe = 0;
    cin >> classe;

    switch (classe)
    {
    case 1:
        cout << firstChoice;
        return 1
        break;
    case 2:
        cout << secondChoice;
        return 2
        break;
    case 3:
        cout << thirdChoice;
        return 3
        break;
    default:
        cout << "Not valid" << endl;
        break;
    }

}
int Roll(int maxNumber) {
    return ((std::rand() % maxNumber) + 1);

}


int main()
{

    srand(time(NULL));
    int drink = 0;

    cout << "Welcome to the tavern traveler ! \nplease choose a drink" << endl;
    drink = Choice("Beer", "Apple Cider", "Wine");
    cout << drink;
    return 0;
}