
#include <iostream>
#include <utility>


int main(){
    std::pair<int, char> mypair(1, 'R');

    int first_element = mypair.first;
    char second_element = mypair.second;

    std::cout << "first :" << first_element << std::endl;
    std::cout << "secont :" << second_element << std::endl;


    return 0;
}
