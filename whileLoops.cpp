#include <iostream>
int main(){

    int counter = 0;

    while(counter < 100000){
        std::cout << counter;
        counter += 1;
    }

    return 0;
}