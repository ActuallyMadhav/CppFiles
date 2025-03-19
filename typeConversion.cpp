#include <iostream>

int main() {

    // type conversion => is the conversion of one data type to another
    // int x = 3.14; => implicit, as int can only hold whole numbers

    // double x = (int) 3.14; // this is explicit, new data type is cast in parentheses in front of the value

    int correct = 8;
    int total = 10;

    double score = (correct / (double) total) * 100;

    std::cout << score;


    return 0;
}