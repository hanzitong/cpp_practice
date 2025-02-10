

#include <iostream>
#include <string>

int main() {
    std::string str = "We think in generalities, but we live in details.";
    int counts = 0;
    for (char &i : str) {
        std::cout << counts << ' ' << i << std::endl;
        ++counts;
    }
    // std::cout << "========" << std::endl;

    std::string str2 = str.substr(3, 5);    // from index 3, 5 charactors. it means index 3 to index 8.
    std::cout << str2 << std::endl;

    std::size_t pos = str.find("live");
    std::cout << pos << std::endl;

    // std::string str3 = str.substr(pos);
    // std::cout << str2 << ' ' << str3 << std::endl;

    int tes = str.find("think");
    


    return 0;
}

