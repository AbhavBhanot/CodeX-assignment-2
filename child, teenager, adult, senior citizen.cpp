#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    
    if (age < 0) {
        std::cout << "Invalid age. Please enter a valid age." << std::endl;
    } else if (age <= 12) {
        std::cout << "You are a child." << std::endl;
    } else if (age <= 19) {
        std::cout << "You are a teenager." << std::endl;
    } else if (age <= 64) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are a senior citizen." << std::endl;
    }

    return 0;
}
