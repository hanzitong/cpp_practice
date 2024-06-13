
#include <iostream>
#include <vector>

#include <utility>


int main() {
    // std::pair can be declared alone.
    std::pair<int, int> aa(1, 20);
    std::cout << aa.first << " " << aa.second << std::endl;

    // vector whose length is 2. each element is std::pair<int, int>
    std::vector<std::pair<int, int>> a(2, std::pair<int, int>(3, 4));
    std::cout << a[0].first << " " << a[0].second << " " << a[1].first << " " << a[1].second << std::endl;


    return 0;
}


