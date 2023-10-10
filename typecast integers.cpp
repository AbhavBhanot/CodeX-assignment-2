#include <iostream>

int main() {
    float floatValue;
    
   
    std::cout << "Enter a floating-point number: ";
    std::cin >> floatValue;
    
    
    int intValue = static_cast<int>(floatValue);
    

    std::cout << "Original value (float): " << floatValue << std::endl;
    std::cout << "Typecasted value (int): " << intValue << std::endl;
    
    return 0;
}
