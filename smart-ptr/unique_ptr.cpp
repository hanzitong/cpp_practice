
#include <iostream>
#include <memory>


/*
The only 1 unique pointer can hold memory ownership, cannot share ownership.
In unique_ptr, copying is prohibited but fransfering ownership explicitly by std::move() is allowed.

Mainlly, smart-pointer is used for securing memory in heap, not for securing memory in stack.
Using smart-pointer for securing stack memory is dengerous because all variables out of scoup will automatically "feee" or "delete" in stack.
so smart-pointer can cause double-delete which is undefined behaviour.
*/

class MyClass{
private:
    int a;
public:
    void hello(void){
        std::cout << "hello" << std::endl;
    }

};


int main(int argc, char* argvp[]){
    // std::unique_ptr<int> ptr = new int(20);                  // compile error.
    std::unique_ptr<int> ptr(new int(20));                      // make unique_ptr by using constructor.
    std::unique_ptr<int> ptr2;
        ptr2.reset(new int(30));                                // make unique_ptr by using reset function.
    std::unique_ptr<int> ptr3 = std::make_unique<int>(100);     // after c++14

    std::cout << "*ptr: " << *ptr << std::endl;
    std::cout << "*ptr2: " << *ptr2 << std::endl;
    std::cout << "*ptr3: " << *ptr3 << std::endl;

    std::cout << "======" << std::endl;

    /* try to copy of unique pointer */
    // std::unique_ptr<int> ptr4 = ptr;     // error. cannot transfer memory ownership implicitly.
    std::unique_ptr<int> ptr4 = std::move(ptr);     // transfer memory ownership from ptr to ptr2 explicitly.
    std::cout << "*ptr4: " << *ptr4 << std::endl;
    // std::cout << "*ptr: " << *ptr << std::endl;     // error, because ptr already released it's memory ownership here.

    /* try to make unique pointer pointing array */
    std::unique_ptr<int[]> array_ptr1(new int[3]);    // common way to make array pointer

    int size = 3;
    std::unique_ptr<int[]> array_ptr2 = std::make_unique<int[]>(size);      // not common way

    for (int i = 0; i<size; i++) {
        array_ptr2[i] = 0;
    }

    std::cout << "======" << std::endl;

    /* try to make a unique pointer pointing class instance */
    std::unique_ptr<MyClass> ptr5 = std::make_unique<MyClass>();    // make MyClass instance and return unique pointer pointing this instance.
    // this instance of MyClass is secured in heap.
    (*ptr5).hello();
    ptr5 -> hello();


    return 0;
}



