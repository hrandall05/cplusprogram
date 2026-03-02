#include <string>
#include <iostream>

/*
    TODO
    1. implement get methods
    2. create a constructor with args
    3. add mileage property(odometer value)
    4. add fuel capacity (tank capacity)
    5. add fuel level (current fuel level)

    6. void refuel(double gallons);
    7. void drive(double distance);
*/
#ifndef CAR_HPP
#define CAR_HPP
using std::string;
class Car{
public:
    // No-arg construcgtor
    Car();

    // arg constructors
    Car(const string& make, const string& model, const int& year, const double& mpg);
    Car(const string& make, const string& model, const int& year, const double& mpg,const double& mileage);

    // set methods
    void setMake(const string& new_make);
    void setModel(const string& new_model);
    void setYear(const int& new_year);
    void setMPG(const double& new_mpg);
    void setMileage(const double& mil);
    void setFuelCap(const double& fuel_cap);
    void setFuelLevel(const double& fuel_lev);
    void setPrevOwners(const bool& has_prev_owners);
    
    
    //get methods
    string getMake();
    string getModel();
    int getYear();
    double getMPG();
    
    //class methods
    void print_info();
    void refuel(const double& gallons);
    void drive(const double& dist);
    
    private:
    string make;
    string model;
    int year;
    double mpg;
    double mileage;
    double fuel_cap;
    double fuel_lev;
    bool prev_owners;
};


//set methods
void Car::setMake(const string& new_make){
    if (!new_make.empty()){
        make = new_make;
    }
}
void Car::setModel(const string& new_model){
    if (!new_model.empty()){
        model = new_model;
    }
}
void Car::setYear(const int& new_year){
    if(new_year<1900){
        year = 1900;
    }
    else if (new_year > 2026){
        year = 2026;
    }
    else{
        year = new_year;
    }
}
void Car::setMPG(const double& new_mpg){
    mpg = (new_mpg >= 0 ) ? new_mpg : 0;
}
void Car::setMileage(const double& new_mil){
    if (new_mil >= 0){
        mileage = new_mil;
    }
    else mileage = 80000;
}
void Car::setFuelCap(const double& cap){
    fuel_cap = (cap > 0) ? cap : 16;
}
void Car::setFuelLevel(const double& lev){
    fuel_lev = (lev >= 0) ? lev : 0;
}
void Car::setPrevOwners(const bool& has_prev_owners){
    prev_owners = has_prev_owners;
}


//get methods
string Car::getMake(){
    return model;
}
string Car::getModel(){
    return model;
}
int Car::getYear(){
    return year;
}
double Car::getMPG(){
    return mpg;
}

// constructors
Car::Car(){
    //set methods for logic
    setMake("...");
    setModel("...");
    setYear(1900);
    setMPG(0);
}
Car::Car(const string& make, const string& model, const int& year, const double& mpg, const double& mileage){
    setMake(make);
    setMake(make);
    setModel(model);
    setYear(year);
    setMPG(mpg);
    if (year <2000){
        setPrevOwners(true);
    }
    else setPrevOwners(false);
    setMileage(mileage);
    setFuelCap(16);
    setFuelLevel(16);

}

//class methods
void Car::print_info(){
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "MPG: " << mpg << std::endl;
    std::cout << "Mileage: " << mileage << std::endl;
    std::cout << "Fuel Capacity: " << fuel_cap << std::endl;
}

void Car::refuel(const double& gallons){
    if (gallons > 0){
        fuel_lev += gallons;
        if (fuel_lev > fuel_cap){
            fuel_lev = fuel_cap;
        }
    }
}

void Car::drive(const double& dist){
    double fuel_needed = dist / mpg;
    if (fuel_needed <= fuel_lev){
        fuel_lev -= fuel_needed;
        mileage += dist;
    }
    else{
        std::cout << "Not enough fuel to drive " << dist << " miles." << std::endl;
    }
}
#endif