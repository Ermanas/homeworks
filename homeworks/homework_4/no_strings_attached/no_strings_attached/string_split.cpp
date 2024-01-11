#include "string_split.h"

namespace no_strings_attached
{

    std::vector<std::string> Split(const std::string &str, const std::string &delimiter)
    {
        std::vector<std::string> splittedString;
        std::size_t position = 0;
        std::size_t initPos = 0;
        
        if (delimiter == "")
        {
            splittedString.emplace_back(str);
            return splittedString;
        }

        while (position != std::string::npos)
        {
            position = str.find(delimiter, initPos);
            // When the position return npos, substr function will return
            // from the last position to the end. It does not matter even
            // exceed the string size like you can write strpos(init, 9999999)
            splittedString.emplace_back(str.substr(initPos, position - initPos));
            initPos = position + delimiter.size();
        }

        return splittedString;
    }

    std::vector<std::string> Split(const std::string &str, const std::string &delimiter, int number_of_chunks_to_keep)
    {
        std::vector<std::string> firstSplit = Split(str, delimiter);

        while (static_cast<int>(firstSplit.size()) > number_of_chunks_to_keep && !firstSplit.empty())
        {
            firstSplit.pop_back();
        }
        return firstSplit;
    }
}
