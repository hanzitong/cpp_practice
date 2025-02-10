
#include <iostream>
#include <unordered_map>


int main() {
    std::unordered_map<std::string, int> umap;
    umap["abc"] = 123;

    std::cout << umap["abc"] << std::endl;
    std::cout << umap["noname1"] << std::endl;  // default value 0

    umap["ccc"] = 222;
    umap["bbb"] = 111;

    for (const auto& c : umap) {
        std::cout << c.first << ": " << c.second << std::endl;
    }


    return 0;
}


