#include <iostream>
#include "Cat.hpp"
#include "AnimalShelter.hpp"

int main(){
    Cat cat1("Persian", "Fluffy", 3);
    Cat cat2("Maincoon mix", "Puddy", 10);
    Cat cat3("Siamese", "Whiskers", 5);
    Cat cat4("English Shorthair", "Mittens", 2);
    
    AnimalShelter shelter;
    shelter.addAnimal(cat1);
    shelter.addAnimal(cat2);
    shelter.addAnimal(cat3);
    shelter.addAnimal(cat4);
    shelter.showInventory();
    return 0;
}