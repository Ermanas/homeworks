#include <iostream>
#include <array>
#include <map>

int main()
{
    std::string user_name;
    std::string user_season;
    std::array<std::string, 2> user_adjective;
    std::string selected_adjective;

    std::array<std::string, 3> default_endings = {
        "eats UB for breakfast",
        "finds errors quicker than the compiler",
        "is not afraid of C++ error messages"
    };

    std::map<std::string, std::string> seasons;
    seasons["spring"] = "STL guru";
    seasons["summer"] = "C++ expert";
    seasons["autumn"] = "coding beast";
    seasons["winter"] = "software design hero";

    std::cout << "Welcome to the fortune teller program!" << std::endl;

    std::cout << "Please enter your name: " << std::endl;
    std::cin >> user_name;

    std::cout << "Please enter the time of year when you were born:" << std::endl;
    std::cout << "(pick from 'spring', 'summer', 'autumn', 'winter')" << std::endl;
    // A little trick to move the curser 1 line up 1A and down 1B
    //std::cout << "\033[1A";
    std::cin >> user_season;
    //std::cout << "\033[1B";

    std::cout << "Please enter an adjective:" << std::endl;
    std::cin >> user_adjective[0];

    std::cout << "Please enter another adjective:" << std::endl;
    std::cin >> user_adjective[1];

    selected_adjective = user_adjective[user_name.size() % user_adjective.size()];
    
    std::cout << std::endl;
    std::cout << "Here is your description:" << std::endl;
    std::cout << user_name << ", ";
    std::cout << "the " << selected_adjective << " ";
    std::cout << seasons[user_season] << " ";
    std::cout << "that " << default_endings[user_name.size() % default_endings.size()] << std::endl;
}