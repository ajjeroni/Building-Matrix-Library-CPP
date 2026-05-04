#include "matrix.h"

#include <iostream>
#include <tuple>
#include <vector>

template <typename T>
void Matrix<T>::PrintShape() const {
    std::cout << "Matrix Size([" << rows_ << ", " << cols_ << "])";
    std::cout << std::endl;
}

// template <typename T>
// void Matrix<T>::PrintMatrix() const {

// }


