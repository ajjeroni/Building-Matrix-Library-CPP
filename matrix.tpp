#include "matrix.h"

#include <iostream>
#include <tuple>
#include <vector>

template <typename T>
void Matrix<T>::PrintShape() const {
    std::cout << "Matrix Size([" << rows_ << ", " << cols_ << "])";
    std::cout << std::endl;
}

template <typename T>
void Matrix<T>::PrintMatrix() const {
    for (size_t r = 0; r < rows_; ++r) {
        for (size_t c = 0; c < cols_; ++c) {
            std::cout << (*this)(r, c) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


