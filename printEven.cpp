#include <iostream>

int main(){

    int limit;

    using namespace std;

    cout << "Enter a number: ";
    cin >> limit;

    for(int i = 0 ; i <= limit ; i++){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }

    return 0;
}