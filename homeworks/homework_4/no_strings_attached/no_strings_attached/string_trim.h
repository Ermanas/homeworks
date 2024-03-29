// string_trim.h
#ifndef STRING_TRIM_H
#define STRING_TRIM_H

#include <string>
namespace no_strings_attached
{
    enum class Side
    {
        kLeft,
        kRight,
        kBoth
    };

/**
 * @brief Trims a given string from sides with a specified char and direction
 * 
 * @param str The input string to be trimmed
 * @param char_to_trim The character to use to trim
 * @param side The side of the trim from left, right or both.
 * @return std::string Returns the trimmed string as string.
 */
    std::string Trim(const std::string &str, char char_to_trim, Side side);

/**
 * @brief Trims a given string's spaces from both sides
 * 
 * @param str The input string to be trimmed
 * @return std::string Returns the trimmed string as string.
 */
    std::string Trim(const std::string& str);
} // no_strings_attached
#endif