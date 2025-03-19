#include <iostream>
using namespace std;

// ONLY WORKS FOR INTEGER EXPONENTS :((

double myPow(double x, int n){
    double result = 1;
    for(int i = 0; i < abs(n); i++){
        result *= n;
    }

    if(n > 0){
        return result;
    }
    else if(n < 0){
        return 1 / result;
    }
    else{
        return 1;
    }
}

int main(){

    double num1;
    int num2;

    cout << "Enter base: " << '\n';
    cin >> num1;

    cout << "Enter exponent: " << '\n';
    cin >> num2;

    cout << myPow(num1, num2);

    return 0;
}