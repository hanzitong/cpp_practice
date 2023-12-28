#include <iostream>
#include <algorithm>
#include <vector>


void show_contents(std::vector<int> vec) {
    for (int i = 0; i<vec.size(); ++i) {
        std::cout << vec[i] << std::endl;
    }


    return;
}

int main(int argc, char* argv[]){
    std::vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << vec1.capacity() << std::endl;
    show_contents(vec1);

    vec1.push_back(100);
    show_contents(vec1);
    vec1.pop_back();

    show_contents(vec1);

    std::cout << vec1.capacity() << std::endl;


    return 0;
}










