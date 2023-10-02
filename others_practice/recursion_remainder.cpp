/*
競技プログラミング　繰り返し二乗法と再帰関数
https://math.nakaken88.com/textbook/cp-binary-exponentiation-and-recursive-function/
*/

#include <iostream>


int modPow(long long a, long long n, long long p){
    return ( n==1 ) ? a : a * modPow(a, n - 1. , p) % p;
}


int main(int argc, char **argv){
    long long a, n, p = 1e9 + 7;

    // a = (double) argv[1];
    // n = (int) argv[2];
    a = std::stoll(argv[1]);
    n = std::stoll(argv[2]);
    // std::cin >> a >> n;

    // std::cout << "p: " << p << std::endl;
    std::cout << modPow(a, n, p) << std::endl;

    return 0;
}












