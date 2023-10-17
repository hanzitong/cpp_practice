
#include <memory>
#include <iostream>
#include <vector>

void func_wrong(int len){
    int* ptr = nullptr;

    for(int i = 0; i<len; ++i){
        *ptr = i * i;
    }

    return;
}


void func(int len){
    std::unique_ptr<int[]> ptr1;    // declaration of smart pointer owed by only 1 instance
    // int* ptr2 = nullptr;

    if(len > 0){
        ptr1 = std::make_unique<int[]>(len);
    }

    for(int i = 0; i<len; ++i){
        ptr1[i] = i*i;
        std::cout << ptr1[i] << std::endl;
    }


    return;
}   // ptr's destructor is called here


int main(int argc, char* argv[]){
    int len = 3;
    func(len);

    // std::vector<int> vec1 = {1, 2, 3, 4, 5, 6};
    // for(int i = 0; i<vec1.size(); i++){
    //     std::cout << vec1[i] << std::endl;
    // }

    return 0;
}


/*
unique_ptr : only 1 ownership
shared_ptr : 


*/



