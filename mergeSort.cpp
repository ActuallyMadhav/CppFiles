#include <iostream>
#include <bits/stdc++.h>

void mergeSort(std::vector<int>& arr);
void merge(std::vector<int>& leftArr, std::vector<int>& rightArr, std::vector<int>& arr);

int main(){

    std::vector<int> array = {5,4,2,4,56,1,2,4};

    for(int x : array){
        std::cout << x << ' ';
    }

    std::cout << '\n';

    //std::vector<int>* pArray = &array;
    //std::cout << '\n' << pArray << '\n';

    mergeSort(array);

    for(int x : array){
        std::cout << x << ' ';
    }

    return 0;
}

void mergeSort(std::vector<int>& arr){
    int length = arr.size();

    if(length <= 1){return;}

    int middle = length / 2;

    std::vector<int> leftArr(middle);
    std::vector<int> rightArr(length - middle);

    for (int i = 0; i < length; i++) {
        if (i < middle) {
            leftArr[i] = arr[i];
        } else {
            rightArr[i - middle] = arr[i]; // Correct index for rightArr
        }
    }

    mergeSort(leftArr);
    mergeSort(rightArr);
    merge(leftArr, rightArr, arr);
}

void merge(std::vector<int>& leftArr, std::vector<int>& rightArr, std::vector<int>& arr){
    int leftSize = leftArr.size();
    int rightSize = rightArr.size();

    //indices
    int i = 0;
    int l = 0;
    int r = 0;

    // check conditions for merging
    while(l < leftSize && r < rightSize){
        if(leftArr[l] < rightArr[r]){
            arr[i] = leftArr[l];
            i++;
            l++;
        }
        else{
            arr[i] = rightArr[r];
            i++;
            r++;
        }
    }

    while(l < leftSize){
        arr[i] = leftArr[l];
        i++;
        l++;
    }

    while(r < rightSize){
        arr[i] = rightArr[r];
        i++;
        r++;
    }
}