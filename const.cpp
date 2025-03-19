#include <iostream>

int main() {

    // defining variables
    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2*pi*radius;

    const double SPEEDOFLIGHT = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    std::cout << "Screen resolution is " << WIDTH << " x " << HEIGHT << '\n';
    std::cout << "The speed of light is " <<SPEEDOFLIGHT;



    return 0;

}