#include <iostream>
using namespace std;

// global variable
int myNum = 3;


int main(){

    int myNum = 1;
    cout << ::myNum;

    return 0;
}

