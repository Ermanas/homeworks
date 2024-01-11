#include <iostream>
#include "no_strings_attached/string_split.h"

using namespace no_strings_attached;

int main()
{
    std::cout << "Example program that splits strings." << std::endl;
    std::cout << "Please enter a string:" << std::endl;

    // Get the string from the user with getline
    std::string myString;
    std::getline(std::cin, myString);

    std::vector<std::string> mySplittedStrings = Split(myString, " ");
    std::cout << "Your split string: ";

    for (auto &str : mySplittedStrings)
    {
        if (str != mySplittedStrings.back())
            std::cout << "'" << str << "' ";
        else
            std::cout << "'" << str << "'" << std::endl;
    }

    return 0;
}
