#include "utilities.h"


    namespace utilities {
        int utilities::choice(string firstChoice, string secondChoice, string thirdChoice)
        {
            while (true)
            {
                std::cout << "1: " << firstChoice << " 2: " << secondChoice << " 3 : " << thirdChoice << std::endl;

                int classe = 0;
                std::cin >> classe;

                if (std::cin.fail()) {
                    std::cin.clear(); // Réinitialise l'état de cin
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore la mauvaise entrée
                    std::cout << "Invalid input! Please enter a number between 1 and 3." << std::endl;
                    continue;
                }


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
            return 0;
        }

    int roll(int minNum, int maxNum)
    {
        std::random_device rd;
        std::mt19937_64 gen(rd());
        std::uniform_int_distribution<> distrib(minNum, maxNum);
        return distrib(gen);
    }

}

