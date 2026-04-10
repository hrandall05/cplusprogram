#include "Cat.hpp"

#ifndef ANIMALSHELTER_HPP
#define ANIMALSHELTER_HPP
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class AnimalShelter{
public:
    void addAnimal(const Cat& cat); //Add a cat to the shelter
    void showInventory() const; //Print all cats in the shelter
private:
    vector<Cat> animals;
};
#endif