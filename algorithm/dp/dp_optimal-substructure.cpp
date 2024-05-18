/*
dynamic programming 
optimal-structure
*/

#include <iostream>
#include <vector>

const long long INF = 1LL << 60;

int main(int argc, char *argv[]) {
    int N;
    std::cin >> N;
    std::vector<long long> h(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> h[i];
    }

    std::vector<long long> dp(N, INF);
    dp[0] = 0;  // initial value

    for (int i = 1; i < N; ++i) {
        if (i == 1) dp[i] = std::abs(h[i] - h[i+1]);
        else dp[i] = std::min(dp[i-1] + std::abs(h[i] - h[i-1]), dp[i-2] + std::abs(h[i] - h[i-2]));
    }

    std::cout << "----" << std::endl;
    std::cout << dp[N-1] << std::endl;

    return 0;
}
