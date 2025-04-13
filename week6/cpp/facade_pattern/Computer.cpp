#include "Computer.hpp"
#include <iostream>

void Computer::boot() {
    std::cout << ssd.read() << std::endl;
    std::cout << memory.load() << std::endl;
    std::cout << cpu.process() << std::endl;
}
