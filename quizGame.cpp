#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

int main(){

    std::string questions[] = { "1. What year was C++ developed in?",
                                "2. What was the predecessor to C++?",
                                "3. Who created C++?"};
    std::string options[3][4] = {{"A. 1947", "B. 1898", "C. 1989", "D. 2000"},
                                 {"A. B++", "B. Java", "C. C", "D. Fortran"},
                                 {"A. Steve Jobs", "B. Ada Lovelace", "C. Bjarne Stroustrup", "D. Dennis Ritchie"},
                                };
    char answers[] = {'C', 'C', 'C'};

    int numberofQuestions = sizeof(questions) / sizeof(questions[0]);
    int score = 0;
    char guess;

    for(int i = 0; i < numberofQuestions; i++){
        std::cout << "---------------------------------------------" << '\n';
        std::cout << questions[i] << '\n';
        // std::cout << "---------------------------------------------" << '\n';

        for(int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }
        std::cout << "---------------------------------------------" << '\n';

        std::cout << "Guess: ";
        std::cin >> guess;

        if(guess == answers[i]){
            std::cout << "CORRECT!" << '\n';
            score++;
        }
        else{
            std::cout << "INCORRECT!" << '\n';
        }

        std::cout << "*********************************************" << '\n';
        std::cout << "Final Score: " << score << '\n';
        std::cout << "*********************************************" << '\n';
        
    }


    return 0;
}