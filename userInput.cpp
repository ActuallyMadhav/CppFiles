#include <iostream>

int main(){

    std::cout << "What is your name?: ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "What is your age?: ";
    int age;
    std::cin >> age;

    std::cout << "What is your GPA?: ";
    double gpa;
    std::cin >> gpa;

    std::cout << "What is your overall grade?: ";
    char grade;
    std::cin >> grade;

    std::cout << "Hello " << name << "!" <<'\n';
    std::cout << "You are " << age << " years old." << '\n';
    std::cout << "Your GPA is " << gpa <<'\n';
    std::cout << "Your overall grade is " << grade << '\n';


    return 0;
}