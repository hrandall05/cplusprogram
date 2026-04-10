#include <iostream>

class Hello{
public:
    //no arg constructor
    Hello() : size(0), messages(nullptr){
        std::cout << "No arg constructor for " << this << std::endl;
    }

    // constructor with args
    Hello(int n) : size(n){
        std::cout << "Argument constructor for " << this << std::endl;
        messages = new std::string[size];
        for (int i = 0; i < size; ++i){
            messages[i] = (i%2 ==0) ? "welcome" : "Not welcome";
        }
    }

    //destructor
    ~Hello(){
        std::cout << "Destructor for " << this << std::endl;
        delete[] messages;
    }

    void bye() const{
        std::cout << "Bye!\n";
    }
    
private:
    int size;
    std::string* messages;
};

int main(){
    Hello* h1 = new Hello();

    //call bye method
    h1->bye();

    //create another object with argument constructor
    Hello* hi2 = new Hello(12);


    //dealocate memory
    delete h1;
    delete hi2;

    for (int i = 0; i< 100; ++i){
        Hello(999999);
    }

    return 0;
}