
#include <iostream>
#include <string>



main(){
    std::string str;
    std::cin >> str;

    std::cout << str.size() << std::endl;   // std::string.size() returns the number of size

    std::cout << str << std::endl;
    str.resize(5);
    std::cout << str << std::endl;

    std::cout << str.length() << std::endl;   // same with std::string.size()

    str.resize(10, '+');    // add '+' to all vacant spaces
    std::cout << str << std::endl;
}

