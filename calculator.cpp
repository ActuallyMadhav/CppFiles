#include <iostream>
#include <cmath>

int main(){

    double num1;
    double num2;
    double result;
    char operation;

    std::cout << "************************CALCULATOR***********************" << '\n';

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter an operation (+) (-) (*) (/) (^): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch(operation){
        case '+':
            result = num1 + num2;
            std::cout << result;
            break;
        case '-':
            result = num1 - num2;
            std::cout << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << result;
            break;
        case '/':
            result = num1 / num2;
            std::cout << result;
            break;
        case '^':
            result = pow(num1, num2);
            std::cout << result;
            break;
        default:
            std::cout << "Please enter a valid operation (+) (-) (*) (/) (^): ";
    }
    

    return 0;
}