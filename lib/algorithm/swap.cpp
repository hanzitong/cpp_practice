
#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    // swap variable
    int x=10, y=20;
    std::swap(x, y);
    std::cout << x << " " << y << std::endl;

    // swap whole vector
    std::vector<int> vec1 (4, x);
    std::vector<int> vec2 (5, y);
    std::swap(vec1, vec2);
    for (int i=0; i<vec1.size(); ++i) {
        std::cout << vec1[i] << std::endl;
    }
    for (int j=0; j<vec2.size(); ++j) {
        std::cout << vec2[j] << std::endl;
    }


}
