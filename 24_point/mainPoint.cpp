#include <iostream>
#include "Point.hpp"

int main(){
    Point p1(3,4);
    Point p2(5,4);

    Point p3(1,2);

    if (p1 != p2){
        std::cout << p3[1];
    }
    else{
        std::cout << p3[0];
    }

    p1[0] = 70-17;
    std::cout << (char)p1[0];
    std::cout << "MQ9\n";

    return 0;

}