 
#include <iostream>
#include <vector>


template <typename T>
class MyAdvancedClass {
// public: can be accessed form everywhere(outside and inside)
public:
    // constructor using initializer list
    MyAdvancedClass(T value) : value(value) {
        std::cout << "Constructor called with value: " << value << std::endl;
    }

    // destractor (all destructor cannot take argument and cannot overload)
    ~MyAdvancedClass() {
        std::cout << "Destructor called" << std::endl;
    }

    // member function 
    // "const" modifier lock this function not to change class member variable.
    // "inline" modifier tells compiler to reduce its overhead(only ~~ns) when called.
    //      also, "inline" may increase memory usage because compiler copy function other place multi-times.
    // "noexcept" modifier insure this function don't return exception.
    //      if exception occurs inside the funciton, the whole program terminate with std::terminate().
    //      by ensuring this function don't through exception, "noexcept" can increase program paformance and readability.
    inline T getValue() const noexcept {
        return value;
    }

    // static member function (which can be called without making class instance)
    static void staticFunction() {
        std::cout << "Static Function Called" << std::endl;
    }

// "protected:" allows user to access from inherited class but prohibits access from outside of class 
protected:
    void protectedFunction() {
        std::cout << "Protected function called" << std::endl;
    }

// "private:" can be accessed from only inside of this class. prohibit access from outside and inherited class.
private:
    T value;
};



int main() {
    // make instance
    MyAdvancedClass<int> myClass(42);

    // call static function
    MyAdvancedClass<int>::staticFunction();

    // cannot call protected function here.
    // myClass.protectedFunction();     // compile error


    return 0;
}



// keywords like "inline" is called "modifier" or "specifier"
