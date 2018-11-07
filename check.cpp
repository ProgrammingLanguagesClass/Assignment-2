#include <gtest/gtest.h>

#include "problem-1/main.h"
#include "problem-2/main.h"
#include "problem-3/main.h"

using namespace std;

TEST(Problem1_Test, GetGrade_Test) {
    EXPECT_STRCASEEQ(getGrade(100).data(), "excellent");
    EXPECT_STRCASEEQ(getGrade(90).data(), "excellent");
    EXPECT_STRCASEEQ(getGrade(85).data(), "excellent");
    EXPECT_STRCASEEQ(getGrade(84).data(), "very good");
    EXPECT_STRCASEEQ(getGrade(75).data(), "very good");
    EXPECT_STRCASEEQ(getGrade(74).data(), "good");
    EXPECT_STRCASEEQ(getGrade(65).data(), "good");
    EXPECT_STRCASEEQ(getGrade(64).data(), "pass");
    EXPECT_STRCASEEQ(getGrade(50).data(), "pass");
    EXPECT_STRCASEEQ(getGrade(49).data(), "fail");
    EXPECT_STRCASEEQ(getGrade(0).data(), "fail");
    EXPECT_STRCASEEQ(getGrade(101).data(), "not valid");
    EXPECT_STRCASEEQ(getGrade(-1).data(), "not valid");
}

TEST(Problem2_Test, FindMax_Test) {
    EXPECT_EQ(findMax(1, 1, 1), 1);
    EXPECT_EQ(findMax(1, 2, 3), 3);
    EXPECT_EQ(findMax(1, 3, 2), 3);
    EXPECT_EQ(findMax(3, 1, 2), 3);
}

TEST(Problem2_Test, DigitName_Test) {
    EXPECT_STRCASEEQ(digitName(-1).data(), "not a valid digit");
    EXPECT_STRCASEEQ(digitName(0).data(), "zero");
    EXPECT_STRCASEEQ(digitName(1).data(), "one");
    EXPECT_STRCASEEQ(digitName(2).data(), "two");
    EXPECT_STRCASEEQ(digitName(3).data(), "three");
    EXPECT_STRCASEEQ(digitName(4).data(), "four");
    EXPECT_STRCASEEQ(digitName(5).data(), "five");
    EXPECT_STRCASEEQ(digitName(6).data(), "six");
    EXPECT_STRCASEEQ(digitName(7).data(), "seven");
    EXPECT_STRCASEEQ(digitName(8).data(), "eight");
    EXPECT_STRCASEEQ(digitName(9).data(), "nine");
    EXPECT_STRCASEEQ(digitName(10).data(), "not a valid digit");
}

int main() {
    return RUN_ALL_TESTS();
}



