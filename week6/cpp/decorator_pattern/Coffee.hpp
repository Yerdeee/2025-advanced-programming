#ifndef COFFEE_HPP
#define COFFEE_HPP

#include <string>

// 기본 커피 클래스
class Coffee {
public:
    virtual int cost() const;
};

// 커피 데코레이터 클래스 (기본 커피 객체를 감싸는 클래스)
class CoffeeDecorator : public Coffee {
protected:
    Coffee* coffee; // 기본 커피 객체를 참조

public:
    CoffeeDecorator(Coffee* coffee);
    int cost() const override;
};

// 우유 데코레이터 클래스
class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(Coffee* coffee);
    int cost() const override;
};

// 설탕 데코레이터 클래스
class SugarDecorator : public CoffeeDecorator {
public:
    SugarDecorator(Coffee* coffee);
    int cost() const override;
};

#endif // COFFEE_HPP
