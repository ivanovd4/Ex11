// Copyright 2021 ivanovd4
#include "train.h"
#include <iostream>

int main() {
  srand (time(NULL));int len = 1000;
  Train train(len);
  std::cout << calculate_len(train.first) << len << std::endl;
  return 0;
}
