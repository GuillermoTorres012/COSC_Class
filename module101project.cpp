#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    do {
        cout << "Enter a positive number: ";
        cin >> num;

        if (num < 0)
            cout << "Needs to be a positive number" << endl;
    } while (num < 0);

    unsigned long long fact = factorial(num);
    cout << "Factorial of " << num << " is: " << fact;

    return 0;
}