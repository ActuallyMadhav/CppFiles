#include <iostream>

int main(){

    int num;
    int temp;
    int reversed = 0;

    using namespace std;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0){
        temp = num % 10;
        reversed = reversed*10 + temp;
        num = num / 10;
    }

    cout << "Reversed number: " << reversed;

    return 0;
}