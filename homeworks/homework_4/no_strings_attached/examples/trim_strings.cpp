#include <iostream>
#include "no_strings_attached/string_trim.h"

using namespace no_strings_attached;

int main()
{
    std::cout << "Example program that trims strings." << std::endl;
    
    std::cout << "Please enter a string:" << std::endl;
    std::string userString;
    std::getline(std::cin, userString);

    std::string trimmedString;
    trimmedString = Trim(userString);
    std::cout << "Your trimmed string: '" << trimmedString << "'" << std::endl;
}