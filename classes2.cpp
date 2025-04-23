#include <iostream>
using namespace std;

class Car{
    public:
        string make;
        string model;
        int year;
        string colour;

        void accelerate(){
            cout << "You stepped on the gas" << '\n';
        }

        void breaks(){
            cout << "You stepped on the breaks" << '\n';
        }

};

int main(){

    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.colour = "Silver";

    cout << car1.make << '\n';
    cout << car1.model << '\n';
    cout << car1.year << '\n';
    cout << car1.colour << '\n';

    car1.accelerate();
    car1.breaks(); 

    return 0;
}