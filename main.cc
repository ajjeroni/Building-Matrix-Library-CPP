#include <iostream>
#include "matrix.h"

int main() {
    Matrix<int> m(2,3);
    m.PrintShape();
    std::cout << m(0,0);
    std::cout << std::endl;
    std::cout << m(1,0);
    std::cout << std::endl;
    return 0;
}

