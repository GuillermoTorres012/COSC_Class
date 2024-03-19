#include <iostream>
#include <string>
using namespace std;

double calculateBonus(double annualSalary, int performanceRating) {
    switch (performanceRating) {
        case 1:
            return 0.25 * annualSalary;
        case 2:
            return 0.15 * annualSalary;
        case 3:
            return 0.10 * annualSalary;
        case 4:
            return 0.0;
        default:
            return 0.0;
    }
}

int main() {
    string employeeName;
    double annualSalary;
    int performanceRating;

    cout << "Enter employee name: ";
    getline(cin, employeeName);
    cout << "Enter annual salary: $";
    cin >> annualSalary;
    cout << "Enter performance rating (1-4): ";
    cin >> performanceRating;

    double bonus = calculateBonus(annualSalary, performanceRating);

    cout << "Employee: " << employeeName << endl;
    cout << "Yearly Salary: $" << annualSalary << endl;
    cout << "Performance Rating: " << performanceRating << endl;
    cout << "Bonus: $" << bonus << endl;

    return 0;
}