#include <iostream>
int main(){

    int choice;
    std::cout << "Pick a number (1-6): ";
    std::cin >> choice;

    switch(choice){
        case 1:
            std::cout << "Jelly Beans";
            break;
        case 2:
            std::cout << "Pizza";
            break;
        case 3:
            std::cout << "Pasta";
            break;
        case 4:
            std::cout << "Chocolate";
            break;
        case 5:
            std::cout << "Candy";
            break;
        case 6:
            std::cout << "Dog Poop";
            break;
        default:
            std::cout << "Please enter a number only from (1-6)";            
    }

    return 0;
}