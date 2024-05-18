
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <numeric>

namespace here{
void display_array(std::vector<int>& aa) {
    for (int i = 0; i < aa.size(); ++i) {
        std::cout << aa[i] << " ";
    }
    std::cout << std::endl;

    return;
}
}   // namespace here


int main() {
    int N = 10;
    std::vector<int> A(N, 0);

    // need 3 rows when generating random numbers
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 99);
    for (int i = 0; i < N; ++i) {
        A[i] = distrib(gen);    // this is how to use random
    }

    // here::display_array(A);
    // std::sort(A.begin(), A.end());

    here::display_array(A);

    // auto ite = A.begin();
    // for (int i ; i < A.size(); ++i) {
    //     std::cout << *ite << std::endl;
    //     ite++;
    // }

    auto ite0 = A.begin();
    auto ite5 = A.begin() + 5;
    std::cout << *ite0 << ' ' << *ite5 << std::endl;
    std::cout << (ite5 - ite0) << std::endl;    // A[0],A[1],A[2],A[3],A[4],A[5]


    return 0;
}

