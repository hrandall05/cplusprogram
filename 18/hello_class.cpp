#include <iostream>

class Hello{
public:
    //no arg constructor
    Hello(){
        std::cout << "No arg constructor for " << this << std::endl;
    }
    void bye() const{
        std::cout << "Bye!\n";
    }
    
private:
    
};

int main(){
    Hello* h1 = new Hello();

    //call bye method
    h1->bye();

    //dealocate memory
    delete h1;

    return 0;
}