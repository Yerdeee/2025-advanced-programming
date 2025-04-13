#include "Coffee.hpp"

// 기본 커피의 가격을 반환
int Coffee::cost() const {
    return 5;
}

// 커피 데코레이터 생성자
CoffeeDecorator::CoffeeDecorator(Coffee* coffee) : coffee(coffee) {}

// 커피 데코레이터의 cost 메서드
int CoffeeDecorator::cost() const {
    return coffee->cost();
}

// 우유 데코레이터의 cost 메서드
MilkDecorator::MilkDecorator(Coffee* coffee) : CoffeeDecorator(coffee) {}

int MilkDecorator::cost() const {
    return coffee->cost() + 2;  // 우유는 2가 추가됨
}

// 설탕 데코레이터의 cost 메서드
SugarDecorator::SugarDecorator(Coffee* coffee) : CoffeeDecorator(coffee) {}

int SugarDecorator::cost() const {
    return coffee->cost() + 1;  // 설탕은 1이 추가됨
}
