#include <vector>
#include "Sorter.hpp"
#include <algorithm>
#include "gtest/gtest.h"

void disp(const std::vector<int>& toDisp){
  std::for_each(toDisp.begin(), 
		toDisp.end(),
		[](int elem){std::cout << elem << std::endl;});
}

int main(int argc, char** argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
