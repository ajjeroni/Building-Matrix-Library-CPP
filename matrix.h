#pragma once

#include <iostream>
#include <tuple>
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

  // map from 2D to 1D
  // this is where the contents of each element will live
  std::vector<T> data_;

  std::tuple<size_t, size_t> shape_;

  // number of elements
  size_t numel_ = rows_ * cols_;
 public:

  /*---------------- Constructors -------------*/ 

  // default
  Matrix() : cols_{0}, rows_{0}, data_{{}} { 
    shape_ = {rows_, cols_};
    numel_ = 0; 
  }

  // non-default with 2 parameters
  Matrix(size_t rows, size_t cols) : rows_{rows}, cols_{cols}, data_{{}} {
    data_.resize(rows_ * cols_, T());
    shape_ = {rows_, cols_};
    numel_ = rows_ * cols_;
  }

  /*------------------- Print Methods --------------------*/
   void PrintShape() const;
   void PrintMatrix() const;
};

#include "matrix.tpp"