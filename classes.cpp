#include <iostream>
using namespace std;

class MyClass{
    public:
        int myNum;
        string myString;
};

int main(){

    MyClass myObj;

    myObj.myNum = 15;
    myObj.myString = "Madhav";

    cout << myObj.myNum << ' ' << myObj.myString;

    return 0;
}