/*
fobo recursion
memo
*/

#include <iostream>
#include <vector>
#include <chrono>


std::vector<long long> memo;


int fibo(int N) {
    std::cout << "call fibo("<< N << ")" << std::endl;

    // base case
    if (N == 0) return 0;
    else if (N == 1) return 1;

    // check memo
    if (memo[N] != -1) return memo[N];

    // call recursion
    // return fibo(N - 1) + fibo(N - 2);

    // for outputting mid-result
    int result = fibo(N - 1) + fibo(N - 2);
    return memo[N] = result;
}


int main(int argc, char *arg[]) {
    memo.assign(1000, -1);    // initialize

    std::cout << "call fibo()" << std::endl;

    auto start = std::chrono::high_resolution_clock::now();

    fibo(999);
    
    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    std::cout << duration.count() << std::endl;

    return 0;
}
