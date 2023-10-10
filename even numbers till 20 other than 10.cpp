#include <iostream>

int main() {
    std::cout << "Even numbers between 1 and 20 (excluding 10):" << std::endl;

    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) { 
            continue;
        }

        if (i == 10) { 
            continue;
        }

        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}
