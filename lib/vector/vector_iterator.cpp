
#include <iostream>
#include <vector>
#include <algorithm>


int main (int argc, char* argv[]) {
    std::vector<int> vec = {1,2,3,4,5,6,7,8,9};

    for (std::vector<int>::iterator it = vec.begin(); vec.end() != it; ++it) {
        std::cout << *it << std::endl;
    }

    std::cout << "=====" << std::endl;

    vec.insert(vec.begin() + 2, 5555);

    for (std::vector<int>::iterator it = vec.begin(); vec.end() != it; ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}


