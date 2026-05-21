// Complete Guide to C++ Programming Foundations
// Exercise 02_12
// Type Inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>
// creating a variable with the type that suits the value you want to assign to it 
// auto type must be initilized the variables  at declaration   
int main(){
    auto score = 8; // Type Inference with auto
    auto points = 12345678901 ; // 11 digit exceeds 32-bits 
    auto height = 6.2f ; //float  
    auto duration =  90.0 ; // floating points constants are double by default 
    auto is_active = true ;
    auto initial = 'p'; // characters are enclosed by single quotes
    auto title = "soccer champions"; //PKc:pointer to cost char 
// suppose: use type inference to automatically determine the variable types  
    std::cout << "The type of score is " << typeid(score).name() << std::endl;
    std::cout << "The type of points is " << typeid(points).name() << std::endl;
    std::cout << "The type of height is " << typeid(height).name() << std::endl;
    std::cout << "The type of duration is " << typeid(duration).name() << std::endl;
    std::cout << "The type of is_active is " << typeid(is_active).name() << std::endl;
    std::cout << "The type of initial is " << typeid(initial).name() << std::endl;
    std::cout << "The type of title is " << typeid(title).name() << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
