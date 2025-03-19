#include <iostream>
using namespace std;

int main(){
    int n;
    int a = 0;
    int b = 1;
    int next;

    cout << "Enter number of terms: ";
    cin >> n;

    int count = 0;

    cout << "Fibonacci Series: ";

    do{
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
        count ++;
    }while(count < n);

    return 0;
}