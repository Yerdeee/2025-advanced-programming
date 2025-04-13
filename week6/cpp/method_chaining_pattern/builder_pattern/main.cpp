#include <iostream>
#include "Person.hpp"

int main() {
    Person person = PersonBuilder()
                        .withName("홍길동")
                        .withAge(20)
                        .withAddress("양산시 부산대학로")
                        .build();

    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Address: " << person.address << std::endl;

    return 0;
}
