#include <iostream>
#include "Adapter.hpp"

int main() {
    ExternalClass external;
    Adapter adapter(external);

    std::cout << adapter.fetch() << std::endl; // "get user info"
    
    return 0;
}
