
#include <iostream>
#include <vector>
#include <utility>


int main(){
    std::vector<std::pair<int, int>> vec(2, std::pair<int, int>(2, 30));

    for (const auto& obj : vec) {   // take each obj from vec
        std::cout << obj.first << " " << obj.second << std::endl;
    }


    return 0;
}
