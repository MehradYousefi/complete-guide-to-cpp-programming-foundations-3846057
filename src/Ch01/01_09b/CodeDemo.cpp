// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string> // to get string from user
int main(){
    std::string name; // declaration
    // to use input in same line of prompt (wit flush)
    std::cout << "Enter your name:  " << std::flush;
    std::cin >> name; //cin only works only for single words 
    std::cout << "Nice to see you, " << name << "!" << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}