#include <iostream>
#include <string>
#include "Cat.hpp"
using std::string;

Cat::Cat(const string& breed,const string& name,const int& age){
    setBreed(breed);
    setName(name);
    setAge(age);
}
//setter methods
void Cat::setBreed(const string& newbreed){
    breed = newbreed;
}
void Cat::setName(const string& newname){
    name = newname;
}
void Cat::setAge(const int& newage){
    age = newage;
}

//getter methods
string Cat::getBreed() const{
    return breed;
}
string Cat::getName() const{
    return name;
}
int Cat::getAge() const{
    return age;
}

//class Methods
void Cat::printInfo() const{
    std::cout<< "----------------------------\n";
    std::cout<< "Breed: " << getBreed() << "\n";
    std::cout<< "Name: " << getName() << "\n";
    std::cout<< "Age: " << getAge() << "\n";
    std::cout<< "----------------------------\n";
}
