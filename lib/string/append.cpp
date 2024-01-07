
#include <iostream>
#include <string>


main(){
    std::string str1;
    std::string str2;
    std::cin >> str1;
    std::cin >> str2;

    str1.append(str2);

    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;


}

