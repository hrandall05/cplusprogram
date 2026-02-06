#include <iostream>
#include <cmath>
#include <vector>

void rotateLeft(std::vector<char>& v, int k);

int main(void) {//             0    1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16   17   18   19   20   21   22   23   24   25   26   27   28   29   30   31   32   33   34   35   36   37   38   39
    std::vector<char> attend {'1', 'u', '3', '4', 'g', '6', 'r', 'j', 'y', 'j', 'd', 'd', 'f', 'h', 's', 'd', 'f', '5', 'a', 'd', 'h', '6', 'j', 's', 'd', 'f', 'j', '1', 'i', '7', 'e', 'l', 'u', '4', 'm', 'o', '9', 's', 'j', 'd', 'f'};
    int n_rotations = pow((50 * 2 - 75 / 3 + 20 % 7 + 20 + 12 / 4), 3);

    //brute force to find attendance code.
    std::cout << "Number of full rotations: " << double(n_rotations/ attend.size()) <<"\nremainder: " << n_rotations%attend.size() << '\n';
    int start_index = n_rotations%(attend.size());
    std::cout << start_index << " starting index of attendance code\n";
    
    std::cout << "Brute force attendance code: ";
    for (int x = start_index; x < start_index + 5; x++) {
        std::cout << attend.at(x);
    }
    std::cout << '\n';

    std::cout << "Function attendance code: ";
    rotateLeft(attend, n_rotations);

    for(int i = 0; i < 5; i++) {
        std::cout << attend.at(i);
    }
    std::cout << '\n';

    return 0;
}

void rotateLeft(std::vector<char>& v, int k) {
    for (int i = 0; i<k;i++){
        char first = v.front();
        v.erase(v.begin());
        v.push_back(first);
    }
}
