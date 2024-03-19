#include <iostream>
using namespace std;

int main() {
    int num1 = -50;
    int num2 = 53;
    int num3 = 78;

    int largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    int smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}