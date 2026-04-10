#include "MyVector.hpp"
#include <iostream>

MyVector::MyVector(int capacity) : size(0), capacity(capacity) {
    elements = new int[capacity]; // allocate memory for the dynamic array
}

MyVector::~MyVector() {
    delete[] elements; // free the allocated memory
}

MyVector::MyVector(const MyVector& other){
    size = other.size;
    capacity = other.capacity;
    elements = new int[capacity]; // allocate memory for the new array
    for (int i = 0; i < size; ++i) {
        elements[i] = other.elements[i]; // copy elements from the other array
    }
}

void MyVector::print() const{
    std::cout <<"[";
    for (int i = 0; i < size; ++i) {
        std::cout << elements[i]<< " ";
    }
    std::cout << "]" << std::endl;
}
void MyVector::push_back(int val){
    elements[size ] = val;
    size++;
}

