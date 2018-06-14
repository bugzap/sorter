/* gtests for sorting algorithms*/
#include "gtest/gtest.h"
#include "Sorter.hpp"

TEST (TestSorter, basicPositiveTest)
{
  std::vector<int> input{3,4,5,6,7,1};
  Sorter s(input);
  std::vector<int> exp{1,3,4,5,6,7};
  EXPECT_EQ(exp, s.getResult());
} 
