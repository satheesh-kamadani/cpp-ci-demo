#include "calculator.h"
#include <gtest/gtest.h>

TEST(CalculatorTest, AddNumbers) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
}

TEST(CalculatorTest, SubtractNumbers) {
    Calculator calc;
    EXPECT_EQ(calc.subtract(5, 3), 2);
}
