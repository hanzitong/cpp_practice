
#include <iostream>
#include <string>



main(){
    std::string str;
    std::cin >> str;

    std::cout << "size: " << str.size() << std::endl;   // std::string.size() returns the number of size
    std::cout << "length: " << str.length() << std::endl;   // same with std::string.size()
    std::cout << "capacity: " << str.capacity() << std::endl;   // return allocated storage

    std::cout << str << std::endl;
    str.resize(5);      // if str is less than 5 charactors, null charactor '\0' is added to vacant place.
    std::cout << str << std::endl;

    std::cout << "size: " << str.size() << std::endl;   // std::string.size() returns the number of size
    std::cout << "capacity: " << str.capacity() << std::endl;   // return allocated storage

    str.resize(10, ' ');    // add ' ' to all vacant spaces
    std::cout << str << std::endl;

    str.resize(13, '+');    // add '+' to all vacant spaces
    std::cout << str << std::endl;
}

