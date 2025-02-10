
#include <iostream>
#include <vector>
#include <bitset>



int main() {
    int N = 5;

    std::cout << (0b00001 << 2) << std::endl;
    std::cout << (1 << 2) << std::endl;
    std::cout << (4 >> 2) << std::endl;

    for (int subset = 0; subset < (1 << N); ++subset) {     // exhaustive search O(2**N)
        std::cout << subset << std::endl;
    }


    return 0;
}
