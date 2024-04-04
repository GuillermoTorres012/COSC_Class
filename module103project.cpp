#include <iostream>
using namespace std;

void towerOfHanoi(int numDisks, char source, char destination, char auxiliary) {
    if (numDisks == 1) {
        cout << "Move disk 1 from rod " << source << " to rod " << destination << endl;
        return;
    }

    towerOfHanoi(numDisks - 1, source, auxiliary, destination);

    cout << "Move disk " << numDisks << " from rod " << source << " to rod " << destination << endl;

    towerOfHanoi(numDisks - 1, auxiliary, destination, source);
}

int main() {
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    towerOfHanoi(numDisks, 'A', 'C', 'B');
    return 0;
}