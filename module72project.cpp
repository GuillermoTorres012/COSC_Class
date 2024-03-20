#include <iostream>
#include <vector>

int main() {
    std::vector<int> ratings;
    int rating;
    
    while (true) {
        std::cout << "Enter rating for top song: ";
        std::cin >> rating;
        
        if (rating < 0)
            break;
        
        if (rating >= 0 && rating <= 4)
            ratings.push_back(rating);
        else
            std::cout << "Enter a number between 0 and 4." << std::endl;
    }
    
    if (ratings.empty()) {
        std::cout << "No ratings provided. Exiting program." << std::endl;
        return 0;
    }
    
    int total = 0;
    for (int r : ratings) {
        total += r;
    }
    
    double average = static_cast<double>(total) / ratings.size();
    
    std::cout << "Average Star Value: " << average << std::endl;

    return 0;
}