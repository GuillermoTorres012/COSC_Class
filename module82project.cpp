#include <iostream>
#include <string>

const int MAX_STUDENTS = 20;

int main() {
    std::string names[MAX_STUDENTS];
    int ages[MAX_STUDENTS];
    char grades[MAX_STUDENTS];
    int numStudents;

    do {
        std::cout << "Enter the number of students (maximum 20): ";
        std::cin >> numStudents;
    } while (numStudents < 0 || numStudents > MAX_STUDENTS);

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Enter information for student " << i + 1 << ":\n";
        std::cout << "Enter student name: ";
        std::cin.ignore(); 
        std::getline(std::cin, names[i]);

        do {
            std::cout << "Enter student age: ";
            std::cin >> ages[i];
        } while (ages[i] <= 0);


        do {
            std::cout << "Enter student grade (A, B, C, D, or F): ";
            std::cin >> grades[i];
        } while (grades[i] != 'A' && grades[i] != 'B' && grades[i] != 'C' && grades[i] != 'D' && grades[i] != 'F');
    }

    std::cout << "\nStudent Information:\n";
    std::cout << "-------------------\n";
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Student " << i + 1 << ":\n";
        std::cout << "Name: " << names[i] << std::endl;
        std::cout << "Age: " << ages[i] << std::endl;
        std::cout << "Grade: " << grades[i] << std::endl;
        std::cout << std::endl;
    }

    return 0;
}