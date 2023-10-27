
/*
To confirm why auto_ptr is deprecated .
auto_ptr appears in c++03, but it's deprecated after c++11.
only 1 auto_ptr can have the ownership to access a object(memory).
if auto_ptr is copied , the ownership to access the object(memory) is transfered to new auto_ptr.
*/

#include <memory>
#include <iostream>


int main(int argc, char* argv[]){
    std::auto_ptr<int> ptr(new int(10));

    std::cout << "*ptr: " << *ptr << std::endl;
    std::cout << "&ptr: " << &ptr << std::endl;
    // std::cout << "ptr: " << ptr << std::endl;        // error

    // if use auto_ptr, no need to delete.
    // BUT if copy auto_ptr, the owner will be transfered automatically. this cause bags.

    std::auto_ptr<int> ptr2 = ptr;              // the memory ownership will be transfered from ptr to ptr2.
    // std::auto_ptr<int> ptr2 = std::move(ptr);   // same meaning with above code.

    std::cout << "======" << std::endl;
    std::cout << "*ptr2: " << *ptr2 << std::endl;   // ptr2 inherited memory ownership from ptr when copying.
    std::cout << "&ptr2: " << &ptr2 << std::endl;

    std::cout << "======" << std::endl;
    std::cout << "&ptr: " << &ptr << std::endl;     // pointer's address. not variable's address.
    std::cout << "*ptr: " << *ptr << std::endl;     // error, ptr already released it's ownership of memory pointing before.


    return 0;
}

