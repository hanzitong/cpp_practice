#include <iostream>
#include <vector>


int main(int argc, char* argv[]) {
    std::vector<int> vec (5, 0);

    for (int i=0; i<vec.size(); ++i) {
        std::cout << vec[i] << std::endl;
    }


}



