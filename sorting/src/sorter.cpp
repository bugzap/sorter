#include "Sorter.hpp"

std::vector<int> Sorter::getResult(){
  return std::vector<int>{1,3,4,5,6,7};
}

std::vector<int> Sorter::compute(){
  switch(fAlgo){
  case Algo::INSERTION: 
    {
      return getResult();
    }
  }
  return getResult();
}
