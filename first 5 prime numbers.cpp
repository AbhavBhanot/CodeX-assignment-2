#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    if (number <= 3) {
        return true;
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    int number = 2; 

    std::cout << "The first five prime numbers are:" << std::endl;

    while (count < 5) {
        if (isPrime(number)) {
            std::cout << number << " ";
            count++;
        }
        number++;
    }

    std::cout << std::endl;

    return 0;
}

