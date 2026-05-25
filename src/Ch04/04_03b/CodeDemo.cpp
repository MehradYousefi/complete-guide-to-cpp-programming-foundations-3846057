// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    int* scorePtr = highScores;   // simple Pointer initialized to the address of the arrays first element 
    //=&highScore[0]; more complicated address of operator (the address of first element of highScore )
    std::cout << "Initial high score: " << *scorePtr << std::endl;  // Display the first high score using pointer 
    std::cout << "second high score using pointer: " << *(scorePtr+1) << std::endl; //  offset from pointer base address 
    std::cout << "third high score using array notation : " << scorePtr[2] << std::endl; // pointer is also array itself
  
    std::cout << std::endl << std::endl;
    return 0;
}
 