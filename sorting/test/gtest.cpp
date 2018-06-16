/* gtests for sorting algorithms*/
#include "gtest/gtest.h"
#include "Sorter.hpp"

TEST (TestSorter, insertionSort)
{
  std::vector<int> input{3,4,5,6,7,1};
  Sorter s(input, Sorter::Algo::INSERTION);
  std::vector<int> exp{1,3,4,5,6,7};
  EXPECT_EQ(exp, s.getResult());
} 

TEST (TestSorter, selectionSort)
{
  std::vector<int> input{3,4,5,6,7,1};
  Sorter s(input, Sorter::Algo::SELECTION);
  std::vector<int> exp{1,3,4,5,6,7};
  EXPECT_EQ(exp, s.getResult());
} 
TEST (TestSorter, mergeSort)
{
  std::vector<int> input{3,4,5,6,7,1};
  Sorter s(input, Sorter::Algo::MERGE);
  std::vector<int> exp{1,3,4,5,6,7};
  EXPECT_EQ(exp, s.getResult());
} 
