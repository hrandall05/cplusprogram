#include "car.hpp"
#include "CarDealer.hpp"
#include <iostream>



int main(){
    //Creat an object of Car class
    Car ferrari;
    ferrari.setMake("Ferrari");
    ferrari.setModel("Dino 246 GT");
    ferrari.setYear(1969);
    ferrari.setMPG(14.2);

    Car mini = Car("Mini","Cooper",2006,35.1,180000);

    ferrari.print_info();
    mini.drive(400);
    mini.print_info();

    // create a car dealer
    CarDealer LakelandMotors;
    LakelandMotors.addCar(ferrari);
    LakelandMotors.addCar(mini);
    LakelandMotors.showInventory();

    return 0;
}