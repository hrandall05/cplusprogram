#include <iostream>
#include <string>
#include <vector>
#include "Cat.hpp"
#include "AnimalShelter.hpp"

void AnimalShelter::addAnimal(const Cat& cat){
    animals.push_back(cat);
}
void AnimalShelter::showInventory() const{
    std::cout<< "Animal Shelter Inventory:\n";
    for(const Cat& cat : animals){
        cat.printInfo();
    }
}

