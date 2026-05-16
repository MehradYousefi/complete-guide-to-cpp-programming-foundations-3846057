// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>
//same level of indentation with main fun. = global variable
int a, b=5; //accesible to all part of code
//best programming practice:
    //avoid global variables
    // use local variables as much as possible
int main(){
    bool  my_flag; 
    a=7; //assignment operator works rights to left
    my_flag=false;
    std::cout << "a= " << a << std::endl;
    std::cout << "b= " << b << std::endl;
    std::cout << "flag= " << my_flag << std::endl;
    my_flag=true;
    std::cout << "a+b= " << a+b << std::endl;
    std::cout << "b-a= " << b-a << std::endl;
    std::cout << "flag= " << my_flag << std::endl;
    unsigned int positive;
    positive=b-a; // must no have negative 
    // value ist -2 complement respresentation in binary
    std::cout << "b-a(unsigned)= " << positive  << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
