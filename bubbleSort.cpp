#include <iostream>
#include <ctime>

void bubbleSort(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(array[j] > array[j+1]){
                // temp swap
                // int temp = array[j];
                // array[j] = array[j+1];
                // array[j+1] = temp;

                //XOR swap
                array[j] = array[j] ^ array[j+1];
                array[j+1] = array[j] ^ array[j+1];
                array[j] = array[j] ^ array[j+1];
            }
        }
    }

    std::cout << '\n' << "Sorted Array: " << '\n';

    for(int k = 0; k < size; k++){
        std::cout << array[k] << ' ';
    }
}

int main(){
    srand(time(NULL));

    const int SIZE = 20;
    int array[SIZE] = {};

    for(int m = 0; m < SIZE; m++){
        int array_elements = rand() % 101;
        array[m] = array_elements;
    }

    std::cout << "Unsorted Array: " << '\n';

    for(int n = 0; n < SIZE; n++){
        std::cout << array[n] << ' ';
    }

    int lenArray = sizeof(array)/sizeof(array[0]);

    bubbleSort(array, lenArray);
}