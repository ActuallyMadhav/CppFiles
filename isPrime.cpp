#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if(num <= 1){
        isPrime = false;
    }
    else{
        for(int i = 2 ; i < sqrt(num) ; i++){
            if(num % i == 0){
                isPrime = false;
                break;
            }
        }
    }

    isPrime ? cout << "Prime" : cout << "Not Prime";

    return 0;
}