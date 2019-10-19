#include "gtest/gtest.h"
#include "lib.h"

TEST(fib, PositiveValue) {
  EXPECT_EQ(1, f(2));
  EXPECT_EQ(5, f(5));
  EXPECT_EQ(13, f(7));
  EXPECT_EQ(55, f(10));
}

TEST(fib, ZeroValue) {
  EXPECT_EQ(0, f(0));
}

TEST(fib, NegativelValue){
  EXPECT_EQ(0, f(-5));
  EXPECT_EQ(0, f(-15));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
