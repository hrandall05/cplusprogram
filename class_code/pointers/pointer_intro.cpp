#include <iostream>

int main(){

    //how to pointers
    float number1 = 12.34; // variable number1 of type float
    float* pF = &number1; // pointer pF holds the address of number1

    std::cout << "Value of number1: " << number1 << std::endl; // value of number1
    std::cout << "Address of number1: " << &number1 << std::endl; // & operator gives the address of the variable
    std::cout << "Value of pF (Address of number1): " << pF << std::endl; // pointer holds the address of number1
    std::cout << "Value pointed to by pF: " << *pF << std::endl; // dereference pointer to get value
    std::cout << "Address of pF: " << &pF << std::endl; // address of the pointer itself
    pF = nullptr; // set pointer to null

    

    return 0;
}