#include <iostream>
int main(){

    // && - logical and
    // || - logical or
    // 
    int temp;
    bool sunny = true;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

   if(temp < 0 || temp > 30){
        std::cout << "Temperature is bad!\n";
   }
    else{
        std::cout << "Temperature is good!\n";
    }
    if(sunny){
        std::cout << "It is sunny outside!";
    }
    else{
        std::cout << "It is cloudy outside!";
    }
    return 0;
}