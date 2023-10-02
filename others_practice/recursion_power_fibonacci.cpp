


#include <iostream>


double power(int base, int exponent){
    std::cout << "call power(), exponent: " << exponent << std::endl;
    if(exponent == 0){
        return 1;
    }else{
        return base * power(base, exponent - 1);
    } 
}


int fibonacci(int num1, int num2, int sequence){
    if(sequence==3){
        return num1 + num2;
    }else{
        return fibonacci(num2, num1 + num2, sequence - 1);
    }
}


int main(int argc, char **argv){
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;

    std::cout << fibonacci(a, b, c) << std::endl;

    return 0;
}


