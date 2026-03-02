#include <vector>
#include "car.hpp"

#ifndef CARDEALER_HPP
#define CARDEALER_HPP
class CarDealer {
public:
    void addCar(const Car& car); //Add a car to the inventory
    void showInventory() const; //print all cars
private:
    std::vector<Car> inventory; // Vector to hold the inventory of cars
}

#endif
