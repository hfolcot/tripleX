#include <iostream>

void PrintIntroduction(int Difficulty)
{ 
    std::cout << "\n\nYou are a secret agent breaking into a LEVEL " << Difficulty << " security server room\n";
    std::cout << "You need to enter the correct code to continue...n\n";
}

bool PlayGame(int Difficulty)
{

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 9;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    PrintIntroduction(Difficulty);

    //Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "\n+ There are 3 numbers in the code";
    std::cout << "\n+ The numbers added together make: " << CodeSum;
    std::cout << "\n+ The numbers multiplied together make: " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou win!\n";
        return true;
    }
    else
    {
        std::cout << "\nYou lose!\n";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    while(true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if(bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    

    return 0;
}