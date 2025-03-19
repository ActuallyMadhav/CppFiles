#include <iostream>

int main(){
    int a, b, c;
    int largest;


    std::cout << "Enter 3 integers: ";
    std::cin >> a >> b >> c;

    largest = a;
    if(b > a){
        largest = b;
    }
    else if(c > b){
        largest = c;
    }
    std::cout << "The largest number is: " << largest;

    return 0;
}