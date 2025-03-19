#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));
    int num = rand() % 100 + 1;

    int guess;
    int tries;

    std::cout << "******************** NUMBER GUESSING GAME ********************\n";

    do{
        std::cout << "Enter a number between 1-100: ";
        std::cin >> guess;
        tries = tries + 1;

        if(guess < num){
            std::cout << "Too low! Try again!\n";
        }
        else if(guess > num){
            std::cout << "Too high! Try again!\n";
        }
        else{
            std::cout << "Correct! You took " << tries << " tries!";
        }

    }while(guess != num);



    return 0;
}