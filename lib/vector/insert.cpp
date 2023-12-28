#include <iostream>
#include <vector>


int main(int argc, char* argv[]) {
    std::vector<int> vec = {1,2,3,4,5,6};

    for (int i=0; i<vec.size(); ++i) {
        std::cout << vec[i] << std::endl;
    }

    std::cout << "---------" << std::endl;

    std::vector<int>::iterator ite = vec.begin();
    vec.insert(ite+2, 10000);
    ite = vec.begin();  // need to re-restore.... but why ????
    /* 
    Once vector element change, (insert, erase or move elemnts etc,)
    the iterator becomes invalid because these procedure need to re-allocate memory 
    */
    vec.erase(ite+3);

    for (std::vector<int>::iterator it=vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << std::endl;
    }


    return 0;
}



