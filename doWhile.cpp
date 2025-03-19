#include <iostream>

int main(){

    int number;

    // std::cout << "Enter a number: ";
    // std::cin >> number;

    // while(number < 0){
    //     std::cout << "Enter a positive number: ";
    //     std::cin >> number;
    // }

    // above method is tedious. need to repeat 2 lines in order for the loop to work properly
    // instead:
    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number < 0);

    // above is a 'do while' loop. it runs the code inside once first. if the condition is true, it runs the code repeatedly

    std::cout << "The number is: " << number;

    return 0;
}