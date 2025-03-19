#include <iostream>

int main() {

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Access granted.";
    }
    else if(age <= 0){
        std::cout << "Invalid age. Please try again.";
    }
    else{
        std::cout << "Access denied. You are underage!";
    }
    return 0;
}