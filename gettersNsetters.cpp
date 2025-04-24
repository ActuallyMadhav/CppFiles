#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:
        // getter
        int getTemperature(){
            return temperature;
        }

        // setter

        // can set conditions
        // eg: minimum temp = 0 , maximum temp = 10

        void setTemperature(int newTemp){
            if(newTemp < 0){
                this->temperature = 0;
            }
            else if(newTemp >= 10){
                this->temperature = 10;
            }
            else{
            this->temperature = newTemp;
            }
        }
};

int main(){

    Stove stove;
    stove.setTemperature(100000);

    std::cout << "The temperature setting is: " << stove.getTemperature() << '\n';

    return 0;
}