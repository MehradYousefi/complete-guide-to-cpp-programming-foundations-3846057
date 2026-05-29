// Complete Guide to C++ Programming Foundations
// Exercise 04_09
// C Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring> // to manupulate c string
// use string class rather than character arrays 
int main(){
    const size_t LENGTH = 50;
    // does not specify a length, as we assign a string it will adopt to its size
    // hovering over racer1[] shows it has 7 (6 char+1(for null terminator))
    char racer1[]= "Speedy";   
    char racer2[LENGTH];
    char raceResult[LENGTH * 2];
    
    //strcpy(buffer,string to copy, max number to copy)
    // performs copy operation safely 
    strncpy(racer2, "Lightning ", sizeof(racer2) - 1 ); 
    //arrays has to terminate with 0 char
    // racer2 has null character in 10th. by te
    racer2[sizeof(racer2)-1]='\0';

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    strncpy(raceResult, "And the winner is: ", sizeof(raceResult) - 1 ); 
    raceResult[sizeof(raceResult )-1]='\0';
    
    strncat(raceResult, racer1, sizeof(raceResult)-strlen(raceResult) - 1  );
    std::cout << "The result is: " << raceResult << std::endl; //winner announcing 

    std::cout << std::endl << std::endl;
    return 0;
}
 