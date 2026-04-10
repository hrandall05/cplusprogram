#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector {
public:
    MyVector(int capacity = 10); // constructor with default capacity

    // destructor
    ~MyVector();

    //copy constructor
    MyVector(const MyVector& other);

    void print() const;
    void push_back(int val);

private:
    int* elements; // dynamic array
    int size;      // current number of elements
    int capacity;  // max number of elements in the array

};


#endif 