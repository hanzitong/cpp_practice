
/*
To confirm why auto_ptr is deprecated .
auto_ptr appears in c++03, but it's deprecated after c++11.

* BAD points of auto_ptr 
(1) auto_ptr only can call "delete" internally not "delete[]", so auto_ptr shouldn't point array. 
    if points, "delete" is called even pointing array. and it's undefined behivior.
(2) The memory only can be owned by only 1 auto_ptr. cannot share with more 2 auto_ptr.
(3) The memory ownership will be transfered from old auto_ptr to new one because of (2). 
(4) auto_ptr shouldn't point dynamic array like std::vector. 
    These STL containers internally copy, resize, etc,,, so auto_ptr cannot point element correctly because of (3).

* GOOD points of auto_ptr (now deprecated)
(1) If we use auto_ptr class as pointer, no need to call "delete". It internally call "delete" as destructor.
(2) It ensure calling "delete" because of destructor even when process is stopped by exception.
(3) It explicits memory ownership
(4) It can transfer memory ownership so it can be used as a retrun value of functions.
(5) etc,,,, (now deprecated. it was a C++ step-up history)
    
*/

#include <memory>   // need for auto_ptr
#include <iostream>


int main(int argc, char* argv[]){
    std::auto_ptr<int> ptr(new int(10));    // only 1 auto_ptr can have the ownership to access a object(memory).

    std::cout << "*ptr: " << *ptr << std::endl;
    std::cout << "&ptr: " << &ptr << std::endl;
    // std::cout << "ptr: " << ptr << std::endl;        // error


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

