#include <iostream>
#include "Calculator.hpp"

int main() {
    Calculator calc;
    double result = calc.add(5)
                        .multiply(2)
                        .subtract(3)
                        .divide(2)
                        .getResult();
    
    std::cout << result << std::endl;
    return 0;
}
