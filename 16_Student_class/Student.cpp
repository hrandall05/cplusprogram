#include <iostream>
#include <string>
#include "Student.hpp"



// initialize static data member (REQUIRED for static members)
int Student::total_students = 0;
int Student::next_id = 1000;    
double Student::goodGPA = 2.5; 

//constructor
Student::Student(const std::string& n, double g) : name(n), gpa(g){
    total_students++;
    id = "U0000" + std::to_string(next_id);
    next_id += 5;
}
//destructor
Student::~Student(){
    total_students--;
}


//get method
int Student::getTotalStudents(){
    return total_students;
}

//set methods
void Student::setGraduationRequirement(double newGPA){
    if(newGPA >= 2.5 && newGPA <= 4.0){
        goodGPA = newGPA;
    } else {
        std::cout << "Invalid GPA requirement. Must be between 2.5 and 4.0." << std::endl;
    }
}

bool Student::canGraduate(){
    return gpa >= goodGPA;
}
void Student::print() const{
    std::cout <<"---------------------------\n";
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
    std::cout << "can graduate: " << (canGraduate() ?"Yes" : "No") << std::endl;
    std::cout <<"---------------------------\n";
}

