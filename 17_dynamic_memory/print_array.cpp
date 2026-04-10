#include <iostream>
void printArr(int* arr, int size);
void printDoubleArr(double* arr, int size);
void doubleArr(const int* arr, int size);
int main(void) {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    printArr(arr, SIZE);

    int* doubled_arr = doubleArr(arr, SIZE);
    printArr(doubled_arr, SIZE);

    return 0;
}
void printArr(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int *doubleArr(const int* arr, int size){
    int new_arr[size];
    for(int i = 0; i < size; i++) {
        new_arr[i] = arr[i] * 2;
    }
    return new_arr;
}