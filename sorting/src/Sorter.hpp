#pragma once

#include <iostream>
#include <vector>

class Sorter{
public:
  Sorter(const std::vector<int>& input)
    :
    fData(input)
  {}
  ~Sorter()
  {}
  enum Algo{
    INSERTION=0,
    SELECTION=1,
    MERGE=2
  };
  std::vector<int> getResult();
private:
  std::vector<int> fData;
};
