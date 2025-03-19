#include <iostream>

typedef std::string text_t; // type 'text_t' instead of typing out 'std::string' every time to declare a string
typedef int number_t; // from here onward can type 'number_t' instead of 'int' to declare int type variables

int main(){

    text_t firstName = "Madhav";
    number_t age = 20;

    std::cout << firstName <<'\n';
    std::cout << age << '\n';

    return 0;
}