#include <iostream>

int main() {
    int counter = 0;
    std::cout << "0 through 10 multiplied by 2 and by 10." << std::endl;
    while (counter <= 10) {
        std::cout << "Number: " << counter << std::endl;
        std::cout << "Multiplied by 2: " << counter * 2 << std::endl;
        std::cout << "Multiplied by 10: " << counter * 10 << std::endl;
        counter++;
    }
    return 0;
}