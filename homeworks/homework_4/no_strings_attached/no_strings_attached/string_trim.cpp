#include "string_trim.h"

namespace no_strings_attached
{

    std::string Trim(const std::string &str, char char_to_trim, Side side)
    {
        std::string trimmedString;
        int rightCount = 0, leftCount = 0;
        
        switch (side)
        {
        case Side::kLeft:
            for (auto &strIt : str)
            {
                // it tries to find the next char after the trimming char.
                if (strIt != char_to_trim)
                {
                    break;
                }
                else
                    leftCount++;
            }
            trimmedString = str.substr(leftCount, std::string::npos);
            break;

        case Side::kRight:
            for (auto &strIt : std::string(str.rbegin(), str.rend()))
            {
                // it tries to find the next char after the trimming char.
                if (strIt != char_to_trim)
                {
                    break;
                }
                else
                    rightCount++;
            }
            trimmedString = str.substr(0, str.size() - rightCount);
            break;
        case Side::kBoth:
            trimmedString = Trim(str, char_to_trim, Side::kRight);
            trimmedString = Trim(trimmedString, char_to_trim, Side::kLeft);
            break;
        default:
            break;
        }

        
        return trimmedString;
    }

    std::string Trim(const std::string& str)
    {
        return Trim(str, ' ', Side::kBoth);
    }

} // no_strings_attached
