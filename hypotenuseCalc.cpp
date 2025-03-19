#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter length of side A: ";
    std::cin >> a;

    std::cout << "Enter length of side B: ";
    std::cin >> b;

    c = pow(((a*a) + (b*b)), 0.5);
    std::cout << "The length of the hypotenuse is: " << c;

    return 0;
}