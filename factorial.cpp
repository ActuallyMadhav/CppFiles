#include <iostream>

int factorial(int x){
    int fact = 1;

    for(int i = 1 ; i <= x ; i++){
        fact *= i;
    }
    return fact;
}

int main(){

    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Factorial is: " << factorial(num);

    return 0;
}