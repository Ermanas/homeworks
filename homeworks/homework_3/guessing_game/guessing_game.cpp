#include <iostream>
#include <random>

int main()
{
    // Random Number Generation Device and Engine
    std::random_device my_random_device;
    std::mt19937 my_random_engine{my_random_device()};

    // Necessary variables
    int rangeMin, rangeMax;
    int generatedNumber, userGuess;
    int guessCount = 0;

    // Welcome and Information about the Game
    std::cout << "Welcome to the GUESSING GAME!" << std::endl;
    std::cout << "I will generate a number and you will guess it!" << std::endl;

    std::cout << "Please provide the smallest number:" << std::endl;
    // Get the range from the user
    std::cin >> rangeMin;
    std::cout << "Please provide the largest number:" << std::endl;
    std::cin >> rangeMax;

    // Create the range with the user inputs:
    if (rangeMin <= rangeMax)
    {
        std::uniform_int_distribution<int> distribution{rangeMin, rangeMax};
        generatedNumber = distribution(my_random_engine);
    }
    else
        return 1;

    std::cout << "I've generated a number. Try to guess it!" << std::endl;
    std::cout << "Please provide the next guess: ";
    std::cin >> userGuess;
    guessCount++;

    while (1)
    {
        if (userGuess == generatedNumber)
            break;
        else if (userGuess > generatedNumber)
        {
            std::cout << "Your number is too big. Try again!" << std::endl;
            std::cout << "Please provide the next guess: ";
            guessCount++;
        }
        else if (userGuess < generatedNumber)
        {
            std::cout << "Your number is too small. Try again!" << std::endl;
            std::cout << "Please provide the next guess: ";
            guessCount++;
        }

        std::cin >> userGuess;
    }

    std::cout << "You've done it! You guessed the number " << generatedNumber << " in " << guessCount << " guesses!" << std::endl;
}