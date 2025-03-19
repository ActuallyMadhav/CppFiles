#include <iostream>

int main() {

    //arithmetic operators return the result of a specific arithmetic operation
    // eg: + , - , * , /
    // no exponentiation operator (python superior?)

    int students = 20;

    //addition
    //students = students + 1;
    //students += 1; //incrementation: same as python

    //both the lines above do the same thing

    //students++; // this adds 1 to whatever is the value of students


    // subtraction
    // students = students - 1;

    // students -= 1; // decrement operator

    // students--; // subtracts 1 from current value of students

    // same logic as addition


    // multiplication
    //students = students * 2;
    //students *= 2; // incremental multiplication
    

    // division
    //students = students / 3;
    //students /= 2; // decremental division

    // division returns the same data type as the variable itself

    // eg: if students is an integer, then students / 3 will return an integer also

    // to retain the decimal portion, change the variable to double

    // eg: double students = 20 ==> students / 3 ==> will return 6.66667


    // modulus (%) => displays the remainder of division (same as python)

    int remainder = students % 3;


    // there is an order of precedence for operations
    // parenthesis
    // multiplication & division
    // addition & subtraction


    std::cout << remainder; 


    return 0; //dont forget - you keep forgetting return 0;
}