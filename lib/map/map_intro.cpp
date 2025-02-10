
#include <iostream>
#include <map>


int main(){
    std::map<std::string, int> mp;

    mp["abc"] = 123;
    std::cout << mp["abc"] << std::endl;    // 123

    mp["abc"] = 456;
    std::cout << mp["abc"] << std::endl;    // 456

    std::cout << mp["noname1"] << std::endl; // return default value 0
    std::cout << mp["noname2"] << std::endl; // return default value 0

    std::map<std::string, int> mp2 = {{"aa", 1}};
    std::cout << mp2["aa"] << std::endl;

    mp2.insert({"bb", 2});
    std::cout << mp2["bb"] << std::endl;

    for (const auto& c : mp2) {
        std::cout << c.first << ": " << c.second << std::endl;
    }

    for (std::pair<const std::string, int>& pair : mp2) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}




