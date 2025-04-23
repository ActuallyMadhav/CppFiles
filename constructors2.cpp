#include <iostream>
using namespace std;

class Car{
    public:
        string make;
        string model;
        int year;
        string colour;
    Car(string make, string model, int year, string colour){
        this->make = make;
        this->model = model;
        this->year = year;
        this->colour = colour;
    }

};

int main(){

    Car car1("Ford", "Mustang", 2025, "Blue");
    Car car2("Chevy", "Chevelle", 1984, "Silver");

    cout << car1.make << '\n';
    cout << car1.model << '\n';
    cout << car1.year << '\n';
    cout << car1.colour << '\n';

    cout << car2.make << '\n';
    cout << car2.model << '\n';
    cout << car2.year << '\n';
    cout << car2.colour << '\n';

    return 0;
}