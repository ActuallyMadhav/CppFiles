#include <iostream>

int getTotal(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int total = getTotal(arr, size);

    std::cout << total;

    return 0;
}