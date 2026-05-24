// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

//MAcros (Preprocessor directives) have no scope (no ; =)
//#define LEVEL_COUNT  4 

int main(){ 
    const size_t LEVEL_COUNT = 4; // need = ;   size_t better than int 
    int  enemies[LEVEL_COUNT ];  //type  Array [capacity];
    float levelDifficulty[]={1.0,3.5,6.0,10.5}; //the are doubles without f at end 
    // but float change these doubles to float  
    enemies[0]=10; // Assign values to each element in array
    enemies[1]=15;
    enemies[2]=20;
    enemies[3]=25;
    std::cout << "The game has "<< LEVEL_COUNT << " levels: " <<  std::endl;
    std::cout << "level 1: " << enemies[0] << " enemies" <<  std::endl;
    std::cout << "level 2: " << enemies[1] << " enemies" <<  std::endl;  
    std::cout << "level 3: " << enemies[2] << " enemies" <<  std::endl; 
    std::cout << "level 4: " << enemies[3] << " enemies" <<  std::endl; 
    
    std::cout << std::endl;
    std::cout << "level difficulties are set as follows:" <<  std::endl;
    std::cout << "level 1: " << levelDifficulty[0] <<  std::endl;
    std::cout << "level 2: " << levelDifficulty[1] <<  std::endl;  
    std::cout << "level 3: " << levelDifficulty[2] <<  std::endl; 
    std::cout << "level 4: " << levelDifficulty[3] <<  std::endl; 
    
    std::cout << std::endl << std::endl;

    return 0;
}
