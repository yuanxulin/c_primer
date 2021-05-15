#include <limits.h>
#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <cstdlib>
#include <iostream>
#include <string>

#include "swap.h"

using namespace testing;
using namespace std;


TEST(SWAP_TEST, SWAP_TWO_INT) {
    int val1 = 10;
    int val2 = 20;
    swap(val1, val2);
    EXPECT_EQ(20, val1);
    EXPECT_EQ(10, val2);
    
}
