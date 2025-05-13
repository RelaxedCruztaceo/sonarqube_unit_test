#include <gtest/gtest.h>
#include "mutliplication.h"

TEST(MultiplicationTest, HandlesPositiveInput)
{
    int result = mutiplication(9, 3);

    EXPECT_EQ(result, 27);
}

TEST(MultiplicationTest, HandlesNegativeInput)
{
    int result = mutiplication(9, -4);

    EXPECT_EQ(result, -36);
}

TEST(MultiplicationTest, HandlesZeroInput)
{
    int result = divide(9, 0);

    EXPECT_EQ(result, 0);
}