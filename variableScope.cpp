#include <iostream>
using namespace std;

// global variable
int myNum = 3;


int main(){

    int myNum = 1;
    cout << ::myNum; // output = 1 

    //local variables are prioritised

    return 0;
}

