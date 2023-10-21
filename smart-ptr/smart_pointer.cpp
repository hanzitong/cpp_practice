

#include <iostream>



/*
each smart pointer is used for reducing danger of dynamic allocation of memory

unique_ptr<T>
shared_ptr<T>
weak_ptr<T>

normal: new, delete 

*/


int main(){
    int* ptr = new int(10);

    std::cout << "ptr=" << *ptr << std::endl;

    for(int i=0; i<10; ++i){
        *ptr += i;
    }

    std::cout << "ptr=" << *ptr << std::endl;

    delete ptr; // if forget this sentence, memory leak occurs


    return 0;
}








