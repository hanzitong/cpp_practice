
// After C++11, for-loop can specify range.
// this garmmer is called "range based for-loop".

#include <iostream>
#include <string>
#include <vector>

int main() {
    int a[3] = {0, 1, 2};
    std::string b = "hello";
    std::vector<int> vec = {100, 200, 300};

    for (int i : a) {
        std::cout << i << std::endl;
    }

    for (char i : b) {
        std::cout << i << std::endl;
    }

    for (int i : vec) {
        std::cout << i << std::endl;
    }

}
