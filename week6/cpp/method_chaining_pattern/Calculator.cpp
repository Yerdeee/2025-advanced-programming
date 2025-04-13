#include "Calculator.hpp"

Calculator::Calculator() : result(0) {}

Calculator& Calculator::add(double value) {
    result += value;
    return *this;
}

Calculator& Calculator::subtract(double value) {
    result -= value;
    return *this;
}

Calculator& Calculator::multiply(double value) {
    result *= value;
    return *this;
}

Calculator& Calculator::divide(double value) {
    if (value != 0) result /= value;
    return *this;
}

double Calculator::getResult() const {
    return result;
}
