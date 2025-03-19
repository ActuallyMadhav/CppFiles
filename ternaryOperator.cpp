#include <iostream>
int main(){

    // condition ? expression1 : expression2;
    // condition => true => execute expression 1
    // eg:

    // int grade;
    // std::cout << "Enter your grade (0-100): ";
    // std::cin >> grade;

    // (grade >= 60)? std::cout << "You PASSED!" : std::cout << "You FAILED!";

    //--------------------------------------------------------------------------------------------------------

    // checking if a number is even:
    // int num;
    // std::cout << "Enter a number: ";
    // std::cin >> num;

    // (num % 2 == 0)? std::cout << "Even" : std::cout << "Odd";

    //---------------------------------------------------------------------------------------------------------

    // checking boolean values
    bool hungry;
    std::cout << "Are you hungry? (Yes = 1 ; No = 0): ";
    std::cin >> hungry;

    // hungry ? std::cout << "You are hungry" : std::cout << "You are not hungry";

    // alternate format to write:
    std::cout << (hungry ? "You are hungry" : "You are full");


    return 0;
}