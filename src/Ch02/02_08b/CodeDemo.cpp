// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 
//we are making video games  
#include <iostream>
#include <cstdint>
//texture 0 , sound 1 , animation 2, script 3
enum class asset_type {texture, sound, animation, script};
enum class menu_section {background, music, sound, controls, texture};

int main(){
    asset_type asset_value;
    asset_value = asset_type::sound;
    //cast asset<-value to int
    std::cout << "asset_value = " << (int) asset_value << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
