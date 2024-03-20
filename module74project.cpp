#include <iostream>

int main() {
    std::cout << "0 through 10 multiplied by 2 and by 10." << std::endl;
    
    int i = 0;
    do {
        std::cout << "Number: " << i << std::endl;
        std::cout << "Multiplied by 2: " << i * 2 << std::endl;
        std::cout << "Multiplied by 10: " << i * 10 << std::endl;
        ++i;
    } while (i <= 10);

    return 0;
}