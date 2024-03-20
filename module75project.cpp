#include <iostream>

int main() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (j == 0)
                std::cout << "*";
            else if ((i == 0 || i == 2 || i == 4) && j < 3)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}