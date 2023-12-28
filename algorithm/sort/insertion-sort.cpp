
#include <iostream>

#include <vector>

void insertion_sort(std::vector<int> vec) {
    for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); ++i) {
        for (std::vector<int>::iterator j = vec.begin(); j != vec.end(); ++j) {
            std::cout << *i << " " << *j << std::endl;
        }
    }


    return;
}


int main(int argc, char* argv[]) {
    std::vector<int> vec = {1,4,2,28, 39, 45, 28, 25, 100};

    insertion_sort(vec);



    return 0;
}



