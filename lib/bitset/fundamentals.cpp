
#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>


int main() {
    unsigned int N0 = 1;
    N0 = N0 << 4;
    // std::cout << std::bitset<32>(N0) << std::endl;

    int N = 1;
    N = N << 3;
    int N2 = std::pow(2, 3);

    // std::cout << N << std::endl;
    // std::cout << std::bitset<8>(N) << std::endl;
    // std::cout << N2 << std::endl;

    int mask = 1 << 4;
    // std::cout << std::bitset<8>(mask | N) << std::endl;
    // std::cout << std::bitset<8>(mask & N) << std::endl;

    int N3 = 0b001111;
    std::cout << N3 << std::endl;
    std::cout << std::bitset<8>(N3) << std::endl;
    std::cout << mask << std::endl;
    std::cout << std::bitset<16>(mask & N3) << std::endl;

    for (int i = 0; i < i << 8; ++i) {
        std::cout << std::bitset<8>(i) << std::endl;
    }



    return 0;
}

