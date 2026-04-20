#include <iostream>

class Dad{
public:
    Dad(){
        std::cout << "Dad's constructor\n";
    }
    virtual ~Dad(){
        std::cout << "Dad's destructor\n";
    }
};

class Son : public Dad{
public:
    Son(){
        std::cout << "Son's constructor\n";
        data = new int[100]; // allocate memory for an array of 100 integers
        std::cout << "Memory was allocated\n";
    }
    ~Son(){
        std::cout << "Son's destructor\n";
        delete[] data; // deallocate the memory
        std::cout << "Memory was deallocated\n";
    }

    int* data;
};

int main(){
    Dad* dad = new Son(); // create a Son object but store it in a Dad pointer
    delete dad; // delete the object through the Dad pointer, which will call the Son's destructor because the destructor is virtual

    return 0;
}