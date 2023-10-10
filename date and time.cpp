#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
    
    std::time_t currentTime = std::time(nullptr);
    std::tm* timeInfo = std::localtime(&currentTime);
    
   
    std::cout << "Current Date and Time: ";
    
    
    std::cout << std::put_time(timeInfo, "%Y-%m-%d ");
    
    
    std::cout << std::put_time(timeInfo, "%H:%M:%S") << std::endl;
    
    return 0;
}
