// #include <iostream>

// int main(){

//     int num;

//     using namespace std;

//     cout << "Enter an integer: ";
//     cin >> num;
    
//     if(num % 2 == 0){
//         cout << num << " is even";
//     }
//     else{
//         cout << num << " is odd";
//     }

//     return 0;
// }

#include <iostream>

int main(){

    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    (num % 2 == 0) ? std::cout << num << " is even" : std::cout << num << " is odd"; // ternary operator --> (condition) ? <if true> : <if false> ;

    return 0;
}