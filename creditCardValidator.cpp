#include <iostream>

// USING LUHN'S ALGORITHM

int getDigit(const int num);

int sumOdd(const std::string cardNum);

int sumEven(const std::string cardNum);

int main(){

    std::string cardNumber;
    int result = 0;
    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumEven(cardNumber) + sumOdd(cardNumber);

    if(result % 10 == 0){
        std::cout << "Card Number is VALID";
    }
    else{
        std::cout << "Card Number is INVALID";
    }

    return 0;
}

int getDigit(const int num){
    return num%10 + (num/10 % 10);
}

int sumOdd(const std::string cardNum){
    int sum = 0;

    for(int i = cardNum.size() - 1; i >= 0; i-=2){
        sum += getDigit(cardNum[i] - '0');
    }
}

int sumEven(const std::string cardNum){
    int sum = 0;

    for(int i = cardNum.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNum[i] - '0') * 2);
    }

    return sum;
}