#include <iostream>
#include <iomanip>

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    
    double balance = 0;
    int choice = 0;

       

    do{
        cout << "******************************************\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "******************************************\n";
        cout << "Enter your choice: ";
        cin >> choice;
        /////////////////
        cin.clear();
        fflush(stdin);
        //////////////// these 2 lines clear the input buffer, so if any random characters are entered, it takes the switch to default case
        cout << "******************************************\n\n"; 
    
        switch(choice){
        case 1: 
            showBalance(balance); 
            break;

        case 2: 
            balance += deposit(); 
            showBalance(balance);
            break;

        case 3: 
            balance -= withdraw(balance); 
            showBalance(balance);
            break;

        case 4: 
            cout << "Thanks for visiting!\n";
            break;
        
        default:
            cout << "Invalid choice! Please try again!\n";
    }
    }while(choice != 4);
    return 0;
}

void showBalance(double balance){
    cout << "Your balance is: $" << setprecision(2) << fixed <<  balance << '\n';
    if (balance == 0){
        cout << "(broke ahh loser ahh get yo money up)\n";
    }
}

double deposit(){
    double amount = 0;
    cout << "Enter amount to be deposited: ";
    cin >> amount;

    if (amount > 0){
        return amount;
    }
    else{
        cout << "Invalid amount! Please try again!\n";
        return 0;
    }
}

double withdraw(double balance){
    double amount = 0;
    cout << "Enter amount to be withdrawn: ";
    cin >> amount;

    if (amount > balance){
        cout << "Insufficient balance! Please try again!\n";
        return 0;
    }
    else if(amount < 0){
        cout << "Invalid amount! Please try again!\n";
        return 0;
    }
    else{
        return amount;
    }
}
