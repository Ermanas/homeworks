// string_split.h
#ifndef STRING_SPLIT_H
#define STRING_SPLIT_H

#include <vector>
#include <string>

/**
 * @brief Splits a string into substring with a specified delimeter.
 * 
 * @param str The input string to be split.
 * @param delimiter The delimeter to be used to identify substring boundaries.
 * @return std::vector<std::string> A vector of substrings.
 */
std::vector<std::string> Split(const std::string& str, const std::string& delimiter);

/**
 * @brief Splits a string into specified number of chunks ofsubstring with a specified delimeter.
 * 
 * @param str The input string to be split.
 * @param delimiter The delimeter to be used to identify substring boundaries.
 * @param number_of_chunks_to_keep Number of chunks to keep from the substrings.
 * @return std::vector<std::string> A vector of substrings limited to specified number.
 */
std::vector<std::string> Split(const std::string& str, const std::string& delimiter, int number_of_chunks_to_keep);

#endif