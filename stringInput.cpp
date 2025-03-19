#include <iostream>

int main(){

    std::string string1;

    std::cout << "Enter a string: ";
    std::getline(std::cin, string1);

    std::cout << string1;

    return 0;
}