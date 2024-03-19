#include <iostream>
#include <string>
using namespace std;

double calculateBonus(double productivityScore) {
    if (productivityScore <= 30) {
        return 50.00;
    } else if (productivityScore >= 31 && productivityScore <= 69) {
        return 75.00;
    } else if (productivityScore >= 70 && productivityScore <= 199) {
        return 100.00;
    } else {
        return 200.00;
    }
}

int main() {
    string employeeName;
    double transactionsDollarValue;
    int numberOfTransactions, numberOfShifts;

    cout << "Enter employee name: ";
    getline(cin, employeeName);
    cout << "Enter transactions dollar value: $";
    cin >> transactionsDollarValue;
    cout << "Enter number of transactions: ";
    cin >> numberOfTransactions;
    cout << "Enter number of shifts worked: ";
    cin >> numberOfShifts;

    double productivityScore = (transactionsDollarValue / numberOfTransactions) / numberOfShifts;

    double bonus = calculateBonus(productivityScore);

    cout << "Employee: " << employeeName << endl;
    cout << "Productivity Bonus: $" << bonus << endl;

    return 0;
}