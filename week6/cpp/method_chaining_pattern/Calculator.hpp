#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

class Calculator {
private:
    double result;

public:
    Calculator();

    Calculator& add(double value);
    Calculator& subtract(double value);
    Calculator& multiply(double value);
    Calculator& divide(double value);
    double getResult() const;
};

#endif // CALCULATOR_HPP
