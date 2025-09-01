#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> arr = {3,5,2,6,4,1,7,8};
    for(int x : arr){
        std::cout << x << ' ';
    }

    std::cout << '\n';

    

    return 0;
}