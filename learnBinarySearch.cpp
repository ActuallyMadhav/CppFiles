#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int low = 0;
    int high = size - 1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == target){
            return mid; // target found at index = mid
        }
        else if(arr[mid] < target){
            low = mid + 1; // search right half
        }
        else{
            high = mid - 1; // search left half
        }
    }
    return -1; // not found in arr
}


int main(){

    int nums[] = {0,1,2,3,4};

    int arrLen = sizeof(nums) / sizeof(nums[0]);

    cout << "Item present at index: " << binarySearch(nums, arrLen, 5) << '\n';

    return 0;
}