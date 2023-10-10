#include <iostream>
#include <string>

int main() {
    std::string correctPassword = "secret";
    std::string userPassword;

    
    while (true) {
        std::cout << "Enter the password: ";
        std::cin >> userPassword;

        if (userPassword == correctPassword) {
            std::cout << "Password is correct. Access granted!" << std::endl;
            break; 
        } else {
            std::cout << "Incorrect password. Try again." << std::endl;
        }
    }

    return 0;
}
