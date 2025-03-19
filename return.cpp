#include <iostream>

// double square(double length);
// double cube(double length);
std::string concatenate(std::string str1, std::string str2);

int main(){

    // double length = 5.0;
    // double area = square(length);
    // double volume = cube(length);

    // std::cout << "Side Length: " << length << '\n';
    // std::cout << "Area: " << area << '\n';
    // std::cout << "Volume: " << volume << '\n';

    std::string firstName = "Madhav";
    std::string lastName = "Raghu";
    std::string fullName = concatenate(firstName, lastName);

    std::cout << "Hello " << fullName;


    return 0;
}

std::string concatenate(std::string str1, std::string str2){
    return str1 + " " + str2;
}

// double square(double length){
//     return length*length;
// }

// double cube(double length)
// {
//     return length*length*length;
// }