#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
public:
    virtual std::string speak() const = 0;
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    std::string speak() const override;
};

class Cat : public Animal {
public:
    std::string speak() const override;
};

#endif // ANIMAL_HPP
