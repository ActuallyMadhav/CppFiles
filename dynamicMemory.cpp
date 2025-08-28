#include <iostream>

int main(){

    int *pNums = nullptr;
    int size;

    std::cout << "enter size: ";
    std::cin >> size;

    pNums = new int[size]; // memory is allocated to heap instead of stack

    for(int i = 0; i < size; i++){
        std::cout << "enter a number: ";
        std::cin >> pNums[i];
        std::cout << '\n';
    }

    for(int j = 0; j < size; j++){
        std::cout << pNums[j] << ' ';
    }

    delete[] pNums;

    return 0;
}