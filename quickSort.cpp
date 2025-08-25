#include <iostream>
#include <bits/stdc++.h>

void quicksort(std::vector<int>& arr, int start, int end);
int partition(std::vector<int>& arr, int start, int end);

int main(){

    std::vector<int> arr = {5,3,2,4,6,1,8,7};

    for(int x : arr){
        std::cout << x << ' ';
    }

    std::cout << '\n';

    quicksort(arr, 0, arr.size()-1);

    for(int x : arr){
        std::cout << x << ' ';
    }


    return 0;
}

void quicksort(std::vector<int>& arr, int start, int end){
    if(end <= start) return;

    int pivot = partition(arr, start, end);

    quicksort(arr, start, pivot - 1);
    quicksort(arr, pivot + 1, end);
}

int partition(std::vector<int>& arr, int start, int end){

    int pivot = arr[end];
    int i = start - 1;

    for(int j = start; j < end - 1; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++; 

    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;

    return pivot;
}