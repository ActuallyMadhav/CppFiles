#include <iostream>
#include <ctime>
using namespace std;

int binarySearch(int array[], int x, int low, int high);
void bubbleSort(int array[], int size);

int main(){

    srand(time(NULL));

    const int SIZE = 10;
    int array[SIZE] = {};

    for(int i = 0; i < SIZE; i++){
        array[i] = rand() % 21;
    }

    cout << '\n' << '\n';
    cout << "Unsorted Array: ";
    for(int j = 0; j < SIZE; j++){
        cout << array[j] << ' ';
    }
    cout << '\n' << '\n';

    bubbleSort(array, SIZE);

    int x = rand() % 21;
    cout << '\n' << "Searching for: " << x << '\n' << '\n';
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, x, 0, n-1);
    (result == -1) ? cout << "Element is not present in array" << "\n\n": cout << "Element is present at index: " << result << "\n\n"; 

    return 0;
}

void bubbleSort(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    cout << '\n' << "Sorted Array: ";

    for(int k = 0; k < size; k++){
        cout << array[k] << ' ';
    }
    cout << "\n\n";
}

int binarySearch(int array[], int x, int low, int high){
    while(low <= high){
        int mid = low + (high - low)/2;

        if(array[mid] == x){
            return mid;
        }
        else if(array[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return -1; // if value not found
}