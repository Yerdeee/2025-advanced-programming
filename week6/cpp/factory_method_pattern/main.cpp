#include <iostream>
#include <memory>
#include "Animal.hpp"

class AnimalFactory {
public:
    std::unique_ptr<Animal> createAnimal(const std::string& animalType) {
        if (animalType == "dog") {
            return std::make_unique<Dog>();
        } else if (animalType == "cat") {
            return std::make_unique<Cat>();
        }
        return nullptr;
    }
};

int main() {
    AnimalFactory factory;
    
    auto dog = factory.createAnimal("dog");
    auto cat = factory.createAnimal("cat");

    if (dog) std::cout << dog->speak() << std::endl;
    if (cat) std::cout << cat->speak() << std::endl;

    return 0;
}
