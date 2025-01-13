
#include <iostream>
#include <algorithm>
#include <vector>


int main() {
    int N = 0;
    std::vector<int> vec = \
        {1, 2,4,7,7,8,9,21,46,243,65,3,999, 321, 98, 57};

    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    auto lower = std::lower_bound(vec.begin(), vec.end(), 7);   // include 7
    std::cout << *lower << std::endl;
    auto upper = std::upper_bound(vec.begin(), vec.end(), 7);   // not include 7
    std::cout << *upper << std::endl;

    auto dis_lower = std::distance(vec.begin(), lower);
    std::cout << "distance_lower: " << dis_lower << std::endl;
    auto dis_upper = std::distance(vec.begin(), upper);
    std::cout << "distance_upper: " << dis_upper << std::endl;

    /*
    std::upper_bound() & std::distance() are used as set !!!!!!!!!
    */


    return 0;
}
