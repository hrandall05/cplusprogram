#include <iostream>
#include <vector>
#include <string>

//template function prototype
template <typename T>
T smallest(const T& n1, const T& n2, const T& n3);

template <typename T>
void print(const T& x);

void print(bool x);

template <typename T>
T findMax(const std::vector<T>& vec);

int main(){
    int i1 = 1, i2 = -4, i3 = -7;
    //call the template function
    std::cout << smallest(i1, i2, i3) << std::endl;
    
    double d1 = 1.4, d2 = -4.7, d3 = -7.9;
    //call the template function
    std::cout << smallest(d1, d2, d3) << std::endl;

    std::string s1 = "apple", s2 = "Banana", s3 = "grape";
    //call the template function
    std::cout << smallest(s1, s2, s3) << std::endl;

    //test print function
    int num = 123;
    bool b = (1<2);
    print(num);
    print(b);

    //test findmax function
    std::vector<int> vec = {1, 5, 3, 9, 2};
    std::cout << "Max: " << findMax(vec) << std::endl;

    return 0;
}

template <typename T>
T smallest(const T& n1, const T& n2, const T& n3){
    if (n1 <= n2 && n1 <= n3) {
        return n1;
    } else if (n2 <= n3) {
        return n2;
    } else {
        return n3;
    }
}

template <typename T>
void print(const T& x){
    std::cout << "Generic: " << x << std::endl;
}

void print(bool x){
    std::cout << "Boolean: " << (x ? "true" : "false") << std::endl;
}

template <typename T>
T findMax(const std::vector<T>& vec){
    if (vec.empty()) {
        throw std::invalid_argument("findMax: Vector is empty");
    }
    T max = vec[0];
    for (const T& item : vec) {
        if (item > max) {
            max = item;
        }
    }
    return max;
}