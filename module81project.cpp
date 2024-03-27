#include <iostream>

const int NUM_BATTING_AVERAGES = 8;

int main() {
    double battingAverages[NUM_BATTING_AVERAGES];
    double sum = 0.0;

    std::cout << "Enter eight batting averages:\n";
    for (int i = 0; i < NUM_BATTING_AVERAGES; ++i) {
        std::cout << "Enter a batting average: ";
        std::cin >> battingAverages[i];
        sum += battingAverages[i];
    }

    double minAverage = battingAverages[0];
    double maxAverage = battingAverages[0];
    for (int i = 1; i < NUM_BATTING_AVERAGES; ++i) {
        if (battingAverages[i] < minAverage) {
            minAverage = battingAverages[i];
        }
        if (battingAverages[i] > maxAverage) {
            maxAverage = battingAverages[i];
        }
    }

    double average = sum / NUM_BATTING_AVERAGES;

    std::cout << "Batting averages:\n";
    for (int i = 0; i < NUM_BATTING_AVERAGES; ++i) {
        std::cout << "averages[" << i << "] is: " << battingAverages[i] << std::endl;
    }

    std::cout << "Minimum batting average is " << minAverage << std::endl;
    std::cout << "Maximum batting average is " << maxAverage << std::endl;
    std::cout << "Average batting average is " << average << std::endl;

    return 0;
}