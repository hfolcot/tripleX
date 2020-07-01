#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{ 
    std::cout << "\n\nYou are a secret agent breaking into a LEVEL " << Difficulty << " security server room\n";
    std::cout << "You need to enter the correct code to continue...\n";
}

bool PlayGame(int Difficulty)
{

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    PrintIntroduction(Difficulty);

    //Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout <<   "===========================================================================";
    std::cout << "\n        + There are 3 numbers in the code";
    std::cout << "\n        + The numbers added together make: " << CodeSum;
    std::cout << "\n        + The numbers multiplied together make: " << CodeProduct;
    std::cout <<   "\n===========================================================================\n\n";

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nCorrect - keep going!\n";
        return true;
    }
    else
    {
        std::cout << "\nIncorrect - try again!\n";
        return false;
    }
}

int main()
{
    srand(time(NULL));
    int LevelDifficulty = 1;
    const int MaxLevel = 5;
    while(LevelDifficulty <= MaxLevel) // Loop game until all levels completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if(bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    
    std::cout << "Congratulations! You are a master hacker!";

    return 0;
}