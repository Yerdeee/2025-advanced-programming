#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person {
public:
    std::string name;
    int age;
    std::string address;

    Person(); // 생성자 정의 필요
};

class PersonBuilder {
private:
    Person person;

public:
    PersonBuilder& withName(const std::string& name);
    PersonBuilder& withAge(int age);
    PersonBuilder& withAddress(const std::string& address);
    Person build();
};

#endif // PERSON_HPP
