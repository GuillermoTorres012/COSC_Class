#include <iostream>
using namespace std;

void fibonacciSequence(int n, int a = 0, int b = 1, int count = 0) {
    if (count < n) {
        if (a != 0)
            cout << a << " ";
        fibonacciSequence(n, b, a + b, count + 1);
    }
}

int main() {
    int numTerms;

    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> numTerms;

    cout << "Fibonacci sequence up to " << numTerms << " terms is: ";
    fibonacciSequence(numTerms + 1);

    return 0;
}