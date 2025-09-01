#include <iostream>
#include <vector>

int main(){

    std::vector<std::string> colours = {"red", "white", "blue", "blue" , "white", "red"};

    int low, mid, high;

    low = 0;
    mid = 0;
    high = colours.size() - 1;

    while(mid <= high){
        if(colours[mid] == "red"){
            std::swap(colours[low], colours[mid]);
            low++;
            mid++;
        }
        else if(colours[mid] == "white"){
            mid++;
        }
        else{
            std::swap(colours[high], colours[mid]);
            high--;
        }
    }

    for(auto x : colours){
        std::cout << x << ' ';
    }

    return 0;
}