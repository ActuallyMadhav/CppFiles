#include <iostream>

int main(){

    std::string x = "test1";
    std::string y = "test2";

    std::swap(x, y);

    std::cout << x << ' ' << y;

    return 0;
}