#include <iostream>
#include <cmath>

int main(){

    double num1;
    double num2;
    char operation;
    double result;

    std::cout << "Enter first number: "<< '\n';
    std::cin >> num1;

    std::cout << "Enter operation (+ , - , * , / , ^): "<< '\n';
    std::cin >> operation;

    std::cout << "Enter second number: " << '\n';
    std::cin >> num2;

    switch (operation){

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
        result = pow(num1,num2);
        std::cout << result;
        break;

        default:
            std::cout << "Please enter a valid operation (+ , - , * , / , ^): ";
            break;

    }



    return 0;
}