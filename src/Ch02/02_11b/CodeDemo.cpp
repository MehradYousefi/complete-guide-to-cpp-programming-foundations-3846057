// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;
    // quotient of (5/9)=0 , one of or both has to be float type
    celsius = (static_cast<float>(5)/9.0)*(fahrenheit-32);

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl; 
    //need truncated version of float
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl; 
    // (int)... is traditional cast
    std::cout << "Fractional part: " << (int)((weight-(int)weight)*10000) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
