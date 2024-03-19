#include <iostream>
#include <string>
using namespace std;

const double BASE_PRICE = 35.00;
const double ADDITIONAL_CHAR_CHARGE = 4.00;
const double OAK_CHARGE = 20.00;
const double GOLD_LEAF_CHARGE = 15.00;

double computePrice(string sign, bool oak, bool goldLeaf) {
    double price = BASE_PRICE;

    int numCharacters = sign.length();

    if (numCharacters > 5) {
        price += (numCharacters - 5) * ADDITIONAL_CHAR_CHARGE;
    }

    if (oak) {
        price += OAK_CHARGE;
    }

    if (goldLeaf) {
        price += GOLD_LEAF_CHARGE;
    }

    return price;
}

int main() {
    string sign;
    char material;
    char lettering;

    cout << "Enter the text for the sign: ";
    getline(cin, sign);

    cout << "Is the sign made of oak? (y/n): ";
    cin >> material;

    cout << "Is the lettering gold-leaf? (y/n): ";
    cin >> lettering;

    bool oak = (material == 'y' || material == 'Y');
    bool goldLeaf = (lettering == 'y' || lettering == 'Y');

    double price = computePrice(sign, oak, goldLeaf);

    cout << "The price of the sign is: $" << price << endl;

    return 0;
}