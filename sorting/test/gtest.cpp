/* gtests for sorting algorithms*/
#include <iostream>
#include <vector>
#include <list>
#include "gtest/gtest.h"
#include "Sorter.hpp"


using List = std::list<int>;

std::vector<List> tInputs;
std::vector<List> tExpected;

void setup(){
  tInputs.emplace_back  (List{5,2,3,6,1,7});
  tExpected.emplace_back(List{1,2,3,5,6,7});

  tInputs.emplace_back  (List{1,1,1,1,1,1});
  tExpected.emplace_back(List{1,1,1,1,1,1});

  tInputs.emplace_back  (List{});
  tExpected.emplace_back(List{});

  tInputs.emplace_back  (List{4});
  tExpected.emplace_back(List{4});

  tInputs.emplace_back  (List{5,4,3,2,1});
  tExpected.emplace_back(List{1,2,3,4,5});
}


TEST (TestSorter, insertionSort)
{
  setup();
  for (size_t i = 0;
       i < tInputs.size();
       i++)
    {
      EXPECT_EQ(tExpected[i],Sorter(tInputs[i], Algo::INSERTION));
    }
  
} 

