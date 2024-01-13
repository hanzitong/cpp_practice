
#include <iostream>
#include <vector>


int main() {
    std::vector<int> vec;   // not initialized = empty
    std::vector<int> vec2(5, -1);

    /*
    there is no function for checkint 
    whether the certain element of std::vector is empty or not.

    the alternative way is 
    to initialize std::vector with -1 or other unrealistic numbers
    as the "empty elements".
    */
    auto res = vec.empty();
    std::cout << res << std::endl;

    bool res2 = false;
    if (-1 == vec2[10]) res2 = true;    // false = 0    // an element in out of range hold 0
    // if (-1 == vec2[2]) res2 = true;  // true = 1
    std::cout << res2 << std::endl;


    return 0;
}


