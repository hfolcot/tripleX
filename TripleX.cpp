#include <iostream>

void PrintIntroduction()
{
    std::cout << "                   ,*******              .,,****,,\n";             
    std::cout << "                *(*//*////@(        *#**//(###((((##%#.\n";         
    std::cout << "              .#((/*,***/*@#      (/*,**/(((//((#((((((&*\n";
    std::cout << "             /(/**/(*..,.*@#     #,,.,,/(/**/((//////(((&(\n";      
    std::cout << "           ,%#((//*,.**...@#    *.. .**,,*@@&((&*//((####@*\n";     
    std::cout << "          #####((/(*,. .. @#    (  .. ...&@,    %((######@#\n";     
    std::cout << "        ((((/////@@//*,.. @#     /&&&&&&&%*    ((########@#\n";     
    std::cout << "      ,%####(((&@%%,...   @#                 ,#((((#####@@,\n";     
    std::cout << "    .####(((/#@&, #....   @#              .((((((######@@*\n";      
    std::cout << "   /%####(((@@(  .#***,,. @#            *#///////((((@@%.\n";       
    std::cout << "  *(((((((#####((((/*.... . ../       (*. .*//(###%@@#.\n";         
    std::cout << "  *%%%#########((*,**,, .. . .@*    (. ,,//(*,*(@@&*\n";            
    std::cout << "  *##########(//(/*//../... ,.@*  **...,.**/(&@@(.\n";              
    std::cout << "  *%%%####(((#((((/,,(/.**.,**@* (,**,*,*/,/(/(#####(((((&(\n";     
    std::cout << "   ./((((((((((((#&(#*,//.@&((/./,,///**/*(/*/(((####%###&&.\n";    
    std::cout << "                  %(**((**@#   ,/**//((//(//((//(#######%@&.\n";    
    std::cout << "                  #//#(/*(@#   /(////((((/((((#(((#######&&.\n";    
    std::cout << "                   .*******.     ,************************.\n";    
    std::cout << "You are a secret agent breaking into a secure server room\n";
    std::cout << "You need to enter the correct code to continue...n\n";
}

void PlayGame()
{

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 9;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    PrintIntroduction();

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
    }
    else
    {
        std::cout << "\nYou lose!\n";
    }
}

int main()
{
    PlayGame();

    return 0;
}