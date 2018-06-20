#pragma once
#include "SortingAlgorithm.hpp"
#include <vector>

template<typename T>
class InsertionSort : public SortingAlgorithm<T>
{
public:
  InsertionSort(const T& inData)
    :
    SortingAlgorithm<T>(),
    fData(inData)
  {}
  T compute() const override;
  
private:
  T fData;
};

