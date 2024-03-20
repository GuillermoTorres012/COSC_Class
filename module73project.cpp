#include <iostream>

int main() {
    std::cout << "0 through 10 multiplied by 2 and by 10." << std::endl;
    
    for (int i = 0; i <= 10; ++i) {
        std::cout << "Number: " << i << std::endl;
        std::cout << "Multiplied by 2: " << i * 2 << std::endl;
        std::cout << "Multiplied by 10: " << i * 10 << std::endl;
    }

    return 0;
}