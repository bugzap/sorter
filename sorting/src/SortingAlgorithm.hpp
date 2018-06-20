#pragma once

template<typename T>
class SortingAlgorithm
{
public:
  SortingAlgorithm()
  {}
  virtual ~SortingAlgorithm()
  {}
  virtual T compute() const = 0 ;
};
