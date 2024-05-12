
#include <iostream>
#include <vector>
#include <random>
#include <boost/timer/timer.hpp>

#define N 10000


int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 999);

    std::vector<int> vec1 (N, 0);
    std::vector<int> vec2 (N, 0);

    for (int i=0; i<N; ++i) {
        int val = distrib(gen);
        vec1[i] = val;
        vec2[i] = val;
    }

    return 0;
}

