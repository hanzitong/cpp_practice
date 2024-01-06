
#include <iostream>
#include <string>



main(){
    std::string str;
    std::cin >> str;

    str.pop_back();    // delete last character
    str.push_back('a');    // push one charactor into last 

    std::cout << str << std::endl;
    std::cout << str.back() << std::endl;   // back() return reference to last element
    std::cout << str.at(3) << std::endl;   // at() return reference to last element

    // return the number of size (size and length are same)
    // std::cout << str.size() << std::endl;
    // std::cout << str.length() << std::endl;


}

