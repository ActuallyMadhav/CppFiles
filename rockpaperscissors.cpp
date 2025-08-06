#include <bits/stdc++.h>

char getComputerChoice();
char getUserChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player, computer;

    player = getUserChoice();
    std::cout << "You chose: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer chose: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getComputerChoice(){
    std::vector<char> options = {'r', 's', 'p'};
    srand(time(NULL));
    int compChoice = rand() % 3;

    char computer = options[compChoice];

    return computer;
}

char getUserChoice(){
    char player = 0;
    std::cout << "*************************" << '\n';
    std::cout << "Rock-Paper-Scissors Game!" << '\n';
    std::cout << "*************************" << '\n';
    std::cout << "Choose one of the following:" << '\n';
    std::cout << "'r' for Rock\n'p' for Paper\n's' for Scissors" << '\n';
    std::cout << "Enter your choice: ";
    std::cin >> player;

    std::vector<char> options = {'r', 's', 'p'};
    
    while(std::find(options.begin(), options.end(), player) == options.end()){
        std::cout << "invalid choice, try again!" << '\n';
        std::cout << "Enter your choice: ";
        std::cin >> player;
    }

    return player;
}

void showChoice(char choice){

    switch(choice){
        case 's':
            std::cout << "Scissors" << '\n';
            break;
        case 'r':
            std::cout << "Rock" << '\n';
            break;
        case 'p':
            std::cout << "Paper" << '\n';
            break;
    }

}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r':
            if(computer == 'r'){
                std::cout << "DRAW!" << '\n';
            }
            else if(computer == 's'){
                std::cout << "YOU WIN!" << '\n';
            }
            else{
                std::cout << "YOU LOSE!" << '\n';
            }
            break;
        case 's':
            if(computer == 's'){
                std::cout << "DRAW!" << '\n';
            }
            else if(computer == 'p'){
                std::cout << "YOU WIN!" << '\n';
            }
            else{
                std::cout << "YOU LOSE!" << '\n';
            }
            break;
        case 'p':
            if(computer == 'p'){
                std::cout << "DRAW!" << '\n';
            }
            else if(computer == 'r'){
                std::cout << "YOU WIN!" << '\n';
            }
            else{
                std::cout << "YOU LOSE!" << '\n';
            }
            break;
    }
}