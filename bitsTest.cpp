#include <bits/stdc++.h>

int main(){

    std::unordered_map<int, char> myHashmap = {
        {1, 'A'},
        {2, 'B'},
    };

    std::vector<int> myVector = {1,2,3,4};

    std::cout << myHashmap[1] << '\n';
    std::cout << myVector[0];

    return 0;
}