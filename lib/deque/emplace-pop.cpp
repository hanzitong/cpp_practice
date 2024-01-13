
#include <iostream>
#include <deque>
#include <utility>
using namespace std;

/*
std::deque 's emplace_back() and pop() is very fast.
std::vector 's random access is faster than std::deque.
*/

/*
I still don't know the difference between emplace_back() and push_back().
ChatGPT says emplace_back() is basically faster than push_back().
*/

int main() {
    deque<pair<int, int>> DQ;
    // deque<int> DQ;
    int N = 3;

    for (int i = 1; i <= N; ++i) DQ.emplace_back(i, 0);
    // for (int i = 0; i <= N; ++i) DQ.emplace_back(i);

    // const char* dir = "URDL";

    DQ.pop_front();
    for (int i = 0; i <= N; ++i) {
        // auto [x, y] = DQ[i];
        pair<int, int> p = DQ[i];
        cout << p.first << "\n";
    }


}
