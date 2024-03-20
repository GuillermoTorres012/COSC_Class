#include <iostream>
using namespace std;

int main() {
    char choice;
    int left_handed = 0, right_handed = 0;
    
    cout << "Enter an L if you are left-handed, an R if you are right-handed or X to quit: ";
    cin >> choice;
    
    while (choice != 'X') {
        if (choice == 'L')
            left_handed++;
        else if (choice == 'R')
            right_handed++;
        
        cout << "Enter an L if you are left-handed, an R if you are right-handed or X to quit: ";
        cin >> choice;
    }
    
    cout << "Number of left-handed students: " << left_handed << endl;
    cout << "Number of right-handed students: " << right_handed << endl;

    return 0;
}