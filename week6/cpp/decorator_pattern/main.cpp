#include <iostream>
#include "Coffee.hpp"

int main() {
    Coffee* coffee = new Coffee();
    std::cout << coffee->cost() << std::endl; // 5

    Coffee* coffeeWithMilk = new MilkDecorator(coffee);
    std::cout << coffeeWithMilk->cost() << std::endl; // 7

    Coffee* coffeeWithSugar = new SugarDecorator(coffee);
    std::cout << coffeeWithSugar->cost() << std::endl; // 6

    Coffee* coffeeWithMilkAndSugar = new SugarDecorator(coffeeWithMilk);
    std::cout << coffeeWithMilkAndSugar->cost() << std::endl; // 8

    // 메모리 해제
    delete coffee;
    delete coffeeWithMilk;
    delete coffeeWithSugar;
    delete coffeeWithMilkAndSugar;

    return 0;
}
