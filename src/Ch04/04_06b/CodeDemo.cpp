// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

// SDL vector 
#include <vector> //header
#include <iostream>
#include <string>

int main(){
    std::vector<std::string> checkpoints = {"Start", "Forest", "Castle"} ;
    // vectors have forntend, backend(insert elements through backend) 
    // inserting in frontend always require reallocation 
    checkpoints.push_back("Cave"); //dynamic,we cann add more 
    checkpoints.push_back("Finish"); 
    // check the size of vector: 
    std::cout << "The Checkpoints at index 2 is: "<< checkpoints[2] << std::endl;
    // print arbitrary values with indexs:
    std::cout << "The game has " <<  checkpoints.size() << " checkpoints." << std::endl; 
    // update castle element:
    checkpoints[2]= "Dark Castle";
    std::cout << "Checkpoint updated to: " << checkpoints[2] << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
