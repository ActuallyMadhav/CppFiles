#include <iostream>

int main(){

    int arr[] = {1,2,3,4,5,6};

    int numElements = sizeof(arr) / sizeof(arr[0]);

    // iterating with normal for loop

    for(int i = 0; i < numElements; i++){
        std::cout << arr[i] << '\n';
    }

    // iterating with 'for-each' loop

    for(int i : arr){
        std::cout << i << '\n';
    }

    return 0;
}