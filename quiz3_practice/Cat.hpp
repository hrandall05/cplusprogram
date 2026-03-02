#include <string>
#include <iostream>
using std::string;

#ifndef CAT_HPP
#define CAT_HPP
class Cat{
public:
    Cat(const string& breed,const string& name,const int& age);
    //setter methods
    void setBreed(const string& newbreed);
    void setName(const string& newname);
    void setAge(const int& newage);

    //getter methods
    string getBreed() const;
    string getName() const;
    int getAge() const;

    //class Methods
    void printInfo() const;

private:
    string breed;
    string name;
    int age;
};
#endif