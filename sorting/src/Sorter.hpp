#pragma once

#include <memory>
#include "InsertionSort.hpp"
#include "SortingAlgorithm.hpp"


#include <list>
#include <iostream>
#include <algorithm>

enum Algo{
    INSERTION=0,
    SELECTION=1,
    MERGE=2
};

template<typename T>
class SorterImpl{
public:
  SorterImpl(const T& input, Algo aAlgo)
    :
    fData(input),
    fAlgo(aAlgo),
    fSorterImpl(nullptr)
  {}
  ~SorterImpl()
  {}

  T getResult(){
    setAlgo();
    assert(fSorterImpl);
    return fSorterImpl->compute();
  }
private:
  void setAlgo()
{
  switch(fAlgo){
    
  case Algo::INSERTION: 
    {
      fSorterImpl.reset(new InsertionSort<decltype(fData)>(fData));
    }
  case Algo::SELECTION:
    {
      fSorterImpl.reset(new InsertionSort<decltype(fData)>(fData));
    }
  case Algo::MERGE:
    {
      fSorterImpl.reset(new InsertionSort<decltype(fData)>(fData));
    }
  }
}
  T                                      fData;
  Algo                                   fAlgo;
  std::unique_ptr< SortingAlgorithm<T> > fSorterImpl;
};


template<typename T>
T Sorter(const T& input, Algo algo)
{
  SorterImpl<T> sImpl(input, algo);

auto disp = [](const std::list<int>& toDisp){
  std::for_each(toDisp.begin(), 
		toDisp.end(),
		[](int elem){
		  std::cout << "Start" << std::endl;
		  std::cout << elem << std::endl;
		  std::cout << "End" << std::endl;
		});
};

//disp(sImpl.getResult());
  return sImpl.getResult();
}
