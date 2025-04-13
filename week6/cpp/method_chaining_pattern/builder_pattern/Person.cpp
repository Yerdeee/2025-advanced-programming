#include "Person.hpp"

Person::Person() : name(""), age(0), address("") {}

PersonBuilder& PersonBuilder::withName(const std::string& name) {
    person.name = name;
    return *this;
}

PersonBuilder& PersonBuilder::withAge(int age) {
    person.age = age;
    return *this;
}

PersonBuilder& PersonBuilder::withAddress(const std::string& address) {
    person.address = address;
    return *this;
}

Person PersonBuilder::build() {
    return person;
}
