#include <iostream>
#include <string>
using namespace std;

int main(){

    int num;
    cin >> num;
    cin.ignore();

    string nums;
    getline(std::cin, nums);

    char lastDig = nums[nums.length() - 1];

    if(lastDig == '0'){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}