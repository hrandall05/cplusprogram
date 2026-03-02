#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student{
public:

    //constructor
    Student(const std::string& n, double g);
    
    //destructor
    ~Student();

    //get funstion
    static int getTotalStudents();;
    
    //set method
    static void setGraduationRequirement(double newGPA); // new GPA [2.5:4.0]

    //class methods
    void print() const;
    bool canGraduate();

private:
    std::string name;
    double gpa;
    static int total_students;
    static int next_id;    //Generate unique student ID
    std::string id;
    static double goodGPA; // Graduation requirement
};

#endif 