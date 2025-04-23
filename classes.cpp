#include <iostream>
using namespace std;

class Human{
    public:
        string name;
        string occupation;
        int age;

        void eat(){
            cout << name << " is eating" << '\n';
        }

        void drink(){
            cout << name << " is drinking" << '\n';
        }

        void sleep(){
            cout << name << " is sleeping" << '\n';
        }
};

int main(){

    Human human1; // human1 is an object.
    Human human2;

    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 70;

    human2.name = "Morty";
    human2.occupation = "Student";
    human2.age = 15;

    cout << human1.name << '\n' << human1.occupation << '\n' << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}