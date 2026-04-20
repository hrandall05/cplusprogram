#include <iostream>
#include <string>

class Human {
private:
std::string name;
int age;

public:
    Human(const std::string& n = "", int a = 0) : name(n), age(a) {
        std::cout << "Human constructor "<< this<<std::endl;
    }
    ~Human() {
        std::cout << "Human destructor "<< this<<std::endl;
    }

    void printInfo() const{
        std::cout << "Name: " << name << "\nAge: " << age << std::endl;
    }
};

class Student : public Human {
private:
double gpa;

public:
    Student(const std::string& n = "", int a = 0, double g = 0.0) : Human(n, a), gpa(g) {
        std::cout << "Student constructor "<< this<<std::endl;
    }
    ~Student() {
        std::cout << "Student destructor "<< this<<std::endl;
    }

    //redefine the base class method
    void printInfo() const{
        Human::printInfo(); // Call the base class method to print name and age
        std::cout << "GPA: " << gpa << std::endl;
    }

    
};


int main(){
    Human person("big man Ty", 21);
    person.printInfo();

    Student stu("Short stack", 20, 3.0);
    stu.printInfo();
    
    return 0;
}

