/*
fobo recursion
non-memo
*/

#include <iostream>
#include <chrono>


int fibo(int N) {
    std::cout << "call fibo("<< N << ")" << std::endl;

    // base case
    if (N == 0) return 0;
    else if (N == 1) return 1;

    // call recursion
    // return fibo(N - 1) + fibo(N - 2);

    // for outputting mid-result
    int result = fibo(N - 1) + fibo(N - 2);
    return result;
}


int main(int argc, char *arg[]) {
    std::cout << "call fibo()" << std::endl;

    auto start = std::chrono::high_resolution_clock::now();

    fibo(29);
    
    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    std::cout << duration.count() << std::endl;

    return 0;
}
