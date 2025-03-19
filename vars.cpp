#include <iostream>

int main() {

    // integer
    int x; // declaration
    x = 5; // assignment

    // double (decimal number)
    double y = 3.14159;
    double price = 10.99;

    // char (singel character)
    char grade = 'A';
    char initials = 'C';
    char currency = '$';

    // boolean (True or False)
    bool isTrue = true;
    bool isFalse = false;

    // string (normal string of characters)

    std::string name = "Madhav"; // assignment is slightly different for strings
    // they require std::string to declare
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Baby Blue road, Riga, Latvia, 123456";

    std::cout << "Hello " << name << "!\nI heard you are " << x << " years old.\nIf pi is " << y << " then say " << isTrue;
    return 0;
}