#pragma once
#include <vector>

template <typename T>
class Matrix {
  /*
  don't have to add the private access specifier
  all things are private by default in a class
  just doing it for consistancy purposes
  */
 private:
  /*
  size_t is a data type that represents sizes and counts, unsigned
  (non-negative) guaranteed to be big enough to represent the size of any object
  in memory
  */
  size_t cols_;
  size_t rows_;

  std::vector<Type> data_;
  std::tuple<size_t, size_t> shape_;
  int numel_ = rows_ * cols_;

 public:
};