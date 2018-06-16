#pragma once

#include <iostream>
#include <vector>

class Sorter{
public:
  enum Algo{
    INSERTION=0,
    SELECTION=1,
    MERGE=2
  };
public:
  Sorter(const std::vector<int>& input, const Algo& aAlgo)
    :
    fData(input),
    fAlgo(aAlgo)
  {}
  ~Sorter()
  {}

  std::vector<int> getResult();
private:
  std::vector<int> compute();
  std::vector<int> fData;
  Algo             fAlgo;
};
