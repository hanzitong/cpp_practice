
#include <iostream>
#include <vector>


int main(int argc, char* argv[]){
    std::vector<int> myvector(3, 100);  // size 3, initialized with 100
    std::vector<int>::iterator it;

    it = myvector.begin();
    it = myvector.insert(it+2, 200);
    // "it" no longer valid, get a new one:
    it = myvector.begin();

    myvector.erase(it);

    for (int i=0; i<myvector.size(); ++i) {
        std::cout << myvector[i] << std::endl;
    }

    std::cout << "-----" << std::endl;

    myvector.erase(it, it+2);

    for (int i=0; i<myvector.size(); ++i) {
        std::cout << myvector[i] << std::endl;
    }


    return 0;
}




