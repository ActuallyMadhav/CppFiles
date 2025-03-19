#include <iostream>

int main(){

    int n;
    int sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    while(n > 0){
        sum = sum + (n % 10);
        n = n / 10;
    }

    std::cout << sum;

    return 0;
}