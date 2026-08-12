// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define BRANCH_MAXIMUM_CARS 254
// #define DEBUG_PRINTS_ENABLED

int main(){
    uint8_t cars = BRANCH_MAXIMUM_CARS;
    int32_t allCars = 1231;
#ifdef DEBUG_PRINTS_ENABLED
    std::cout << "DEBUG: Adding branch cars (" << (int) cars  << ") to all cars (" << allCars << ") to get total." << std::endl;
#endif
    allCars += cars;
    std::cout << "The total number of cars across branches is " << allCars << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
