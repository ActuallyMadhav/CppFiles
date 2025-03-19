#include <iostream>
int main(){

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin , name);

    std::cout << "Hi " << name << '\n';

    // APPEND
    // name.append("@gmail.com");
    // std::cout << "Your username is now "<< name;

    // .at()
    // std::cout << name.at(name.length() - 1);

    // .insert()
    // name.insert(0, "R ");
    // std::cout << name;

    // .find()
    // std::cout << name.find(" ");

    // .erase()
    name.erase(0,3);
    std::cout << name;

    return 0;
}