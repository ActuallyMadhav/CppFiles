#include <iostream>
int main(){

    std::string number = "";

    int counter = 1;

    while (counter < 1001){
        std::string numString = std::to_string(counter);
        number.append(numString);
        counter = counter + 1;
    }
    int numLength = number.length();

    std::cout << numLength;

    return 0;
}