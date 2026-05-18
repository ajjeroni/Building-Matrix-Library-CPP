#include <iostream>

#include "matrix.h"

int main() {
  Matrix<int> m(2, 2);
  Matrix<int> I(2, 2);
  m(0, 0) = 1;
  m(0, 1) = 2;
  m(1, 0) = 3;
  m(1, 1) = 4;
  I(0, 0) = 2;
  I(0, 1) = 0;
  I(1, 0) = 0;
  I(1, 1) = 2;
  m.PrintMatrix();
  I.PrintMatrix();
  m.MatrixMultiplication(I).PrintMatrix();
  m.ElementWiseMultiplication(I).PrintMatrix();
  m.SquareElements().PrintMatrix();
  
  m.ScalarMultiplication(5).PrintMatrix();
  std::cout << m(0,0) << std::endl;
  
  return 0;
}
