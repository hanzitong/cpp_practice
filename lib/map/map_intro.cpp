
#include <iostream>
#include <vector>
#include <map>


main(){
    std::map<std::string, int> mp;
    mp["abc"] = 123;

    std::cout << mp["abc"] << std::endl;    // 123

    mp["abc"] = 456;

    std::cout << mp["abc"] << std::endl;    // 456

    std::cout << mp["noname1"] << std::endl; // return default value 0
    std::cout << mp["noname2"] << std::endl; // return default value 0

    const std::map<std::string, int> mp2 = ;

}




