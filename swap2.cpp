#include <iostream>

using namespace std;

int main(){

    int x = 1;
    int y = 2;

    cout << "x = " << x << '\n';
    cout << "y = " << y << '\n';

    int temp;
    temp = x;
    x = y;
    y = temp;

    cout << "x = " << x << '\n';
    cout << "y = " << y << '\n'; 

    return 0;
}