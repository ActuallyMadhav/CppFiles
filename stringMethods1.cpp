#include <iostream>
int main(){

    std::string name;

    std::cout << "Enter rank, name and appointment: \n";
    std::getline(std::cin, name);

    int numChars = name.length();

    if(numChars > 50){
        std::cout << "Name has to be less than 50 characters! Please enter again.";
    }
    else if(name.empty() == true){
        std::cout << "No name detected, please enter again";
    }
    else{
        std::cout << "Accepted. Welcome " << name << ". Please proceed.";
    }

    return 0;
}