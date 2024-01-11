#include "no_strings_attached/string_trim.h"
#include "gtest/gtest.h"

using namespace no_strings_attached;

TEST(StringTrim, LeftSideTrim)
{
    std::string testString = "     test text";
    char testChar = ' ';
    Side testSide = Side::kLeft;

    std::string controlString = "test text";
    std::string trimmedString;

    trimmedString = Trim(testString, testChar, testSide);
    EXPECT_EQ(trimmedString, controlString);
}

TEST(StringTrim, RightSideTrim)
{
    std::string testString = "test text     ";
    char testChar = ' ';
    Side testSide = Side::kRight;

    std::string controlString = "test text";
    std::string trimmedString;

    trimmedString = Trim(testString, testChar, testSide);
    EXPECT_EQ(trimmedString, controlString);
}

TEST(StringTrim, BothSidesTrim)
{
    std::string testString = "     test text     ";
    char testChar = ' ';
    Side testSide = Side::kBoth;

    std::string controlString = "test text";
    std::string trimmedString;

    trimmedString = Trim(testString, testChar, testSide);
    EXPECT_EQ(trimmedString, controlString);
}

TEST(StringTrim, EmptyString)
{
    std::string testString = "";
    char testChar = ' ';
    Side testSide = Side::kBoth;

    std::string controlString = "";
    std::string trimmedString;

    trimmedString = Trim(testString, testChar, testSide);
    EXPECT_EQ(trimmedString, controlString);
}

TEST(StringTrim, EmptyTrimCharacter)
{
    std::string testString = "     test text     ";
    char testChar = '\0';
    Side testSide = Side::kBoth;

    std::string controlString = "     test text     ";
    std::string trimmedString;

    trimmedString = Trim(testString, testChar, testSide);
    EXPECT_EQ(trimmedString, controlString);
}

TEST(StringTrim, DifferentTrimCharacter)
{
    std::string testString = "test text";
    char testChar = 't';
    Side testSide = Side::kBoth;

    std::string controlString = "est tex";
    std::string trimmedString;

    trimmedString = Trim(testString, testChar, testSide);
    EXPECT_EQ(trimmedString, controlString);
}

TEST(StringTrim, SingleInputTrimFunction)
{
    std::string testString = "     test text     ";

    std::string controlString = "test text";
    std::string trimmedString;

    trimmedString = Trim(testString);
    EXPECT_EQ(trimmedString, controlString);
}

TEST(StringTrim, SingleInputTrimFunctionEmptyString)
{
    std::string testString = "";

    std::string controlString = "";
    std::string trimmedString;

    trimmedString = Trim(testString);
    EXPECT_EQ(trimmedString, controlString);
}