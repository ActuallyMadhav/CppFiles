#include <iostream>
int main(){

    double temp;
    double result;
    char unit;

    std::cout << "*************** TEMPERATURE CALCULATOR ***************\n";
    std::cout << "\n";
    std::cout << "Enter the unit you wish to convert ('C' or 'F'): ";
    std::cin >> unit;

    if(unit == 'f' || unit == 'F'){
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temp;
        result = (temp - 32) * (5.0/9);
        std::cout << "Temperature is: " << result << "C\n";
    }
    else if(unit == 'c' || unit == 'C'){
        std::cout << "Enter temperature in Celcius: ";
        std::cin >> temp;
        result = (temp * (9.0/5)) + 32;
        std::cout << "Temperature in Fahrenheit is: " << result << "F\n";
    }
    else{
        std::cout << "Invalid unit entered!\n";
    }

    std::cout << "\n";
    std::cout << "*******************************************************";

    return 0;
}