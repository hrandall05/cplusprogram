#include <iostream>
#include "Cat.hpp"

int main(){
    Cat cat1("Persian", "Fluffy", 3);
    cat1.printInfo();
    Cat cat2("Maincoon", "Puddy", 10);
    cat2.printInfo();
    return 0;
}