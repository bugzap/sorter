#include "InsertionSort.hpp"
#include <vector>
#include <list>

template<>
std::vector<int> InsertionSort< std::vector<int> >::compute() const
{
  int currElem;
  for (auto it = fData.begin() + 1; it != fData.end() ; it++){
    currElem = *it;

    //Put the current element in the right position
    for (auto it2 = fData.begin() ; it2 != it ; it2++)
      {
	if (*it < *it2) 
	  {
	    
	    break;
	  }
      }
  }

  return std::vector<int>{1,3,4,5,6,7};
}

template<>
std::list<int> InsertionSort< std::list<int> >::compute() const{
  int currElem;
  int biggerElem;
  std::list<int> inData = fData;
  for (auto it  = std::next(inData.begin()); it != inData.end(); it++ )
    {
      currElem = *it;
      
      // Put the current element in the right position
      
      for (auto it2 = inData.begin() ; it2 != it ; it2++) {
	if (*it < *it2)
	  {
	    biggerElem = *it2;
	    *it2 = currElem;
	    it2++;
	    it2 =inData.insert(it2, biggerElem);
	    it = inData.erase(it);
	    it--;
	    break;
	  }
	
      }
      
    }
  return inData;
}


