#pragma once
#include <vector>

template <typename T>
class Matrix {
 private:
  /*
  size_t is a data type that represents sizes and counts, unsigned
  (non-negative) guaranteed to be big enough to represent the size of any object
  in memory
  */
  size_t cols;
  size_t rows;
};