#include <vector>
#include "gtest/gtest.h"
#include "no_strings_attached/string_split.h"

using namespace no_strings_attached;

TEST(StringSplit, StandartInput)
{
    std::string testString = "test text", testDelimeter = " ";
    std::vector<std::string> testSplit = Split(testString, testDelimeter);
    std::vector<std::string> controlSplit = {"test", "text"};
    EXPECT_EQ(testSplit, controlSplit);
}

TEST(StringSplit, StandartInputSpecifiedNumberChunks)
{
    std::string testString = "test text", testDelimeter = " ";
    int testChunks = 1;
    std::vector<std::string> testSplit = Split(testString, testDelimeter, testChunks);
    std::vector<std::string> controlSplit = {"test"};
    EXPECT_EQ(testSplit, controlSplit);
    
}

TEST(StringSplit, EmptyString)
{
    std::string testString = "", testDelimeter = " ";
    std::vector<std::string> testSplit = Split(testString, testDelimeter);
    std::vector<std::string> controlSplit = {""};
    EXPECT_EQ(testSplit, controlSplit);
    
}

TEST(StringSplit, EmptyDelimeter)
{
    std::string testString = "test text", testDelimeter = "";
    std::vector<std::string> testSplit = Split(testString, testDelimeter);
    std::vector<std::string> controlSplit = {"test text"};
    EXPECT_EQ(testSplit, controlSplit);
    
}

TEST(StringSplit, SameStringAndDelimeter)
{
    std::string testString = "test text", testDelimeter = "test text";
    std::vector<std::string> testSplit = Split(testString, testDelimeter);
    std::vector<std::string> controlSplit = {"", ""};
    EXPECT_EQ(testSplit, controlSplit);
    
}