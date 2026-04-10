#include "MyVector.hpp"

int main(){
    // create my vector object dynamically
    MyVector* mv = new MyVector(15);

    for (int i = 0; i < 10; i++){
        mv->push_back(i * i);
    }

    mv->print();

    delete mv; // don't forget to free the allocated memory
    return 0;
}