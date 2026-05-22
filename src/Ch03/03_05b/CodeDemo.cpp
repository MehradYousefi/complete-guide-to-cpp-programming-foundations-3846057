// Complete Guide to C++ Programming Foundations
// Exercise 03_05
// Compound Assignment Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int ammo = 30; //player
    int incoming_zombies = 20;
    std::cout << "Initial Ammo: " << ammo << std::endl;
    std::cout << "Initial Zombies Incoming: " << incoming_zombies << std::endl;
    ammo +=10;// Addition assignment
    std::cout<< "Ammo after finding more: " << ammo << std::endl;
    ammo -=5;// Subtraction assignment after using weapon
    std::cout<< "Ammo after using some: " << ammo << std::endl;
    incoming_zombies *=2;// Multiplication assignment
    std::cout<< "Zombies duplicated after timeout: " << incoming_zombies << std::endl;
    ammo /=2; // Division assignment
    std::cout<< "Ammo after sharing with a friend: " << ammo << std::endl;
    ammo %=6;// Remainder assignment
    std::cout<< "Ammo left in magazine after losing backpack: " << ammo << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
