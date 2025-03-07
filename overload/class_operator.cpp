
#include <iostream>
#include <vector>

class Mul {
    private:
        int i_;
    public:
        Mul(int input): i_(input) // initializer list
        {
            std::cout << "constructor 0 was called" << std::endl;
        }

        Mul(int input1, int input2): i_(input1 * input2) // overloaded constructor
        {
            std::cout << "constructor 1 was called" << std::endl;
        }

        void i_printer(void) {
            std::cout << i_ << std::endl;
        }

        int operator() (int j) {
            return i_ * j;
        }

        void operator() () {
            std::cout << i_ << std::endl;
        }
};


int main() {
    int i;

    Mul guest1(2);
    Mul guest2(5);
    Mul guest3(5, 10);

    guest1.i_printer();
    guest2.i_printer();
    guest3.i_printer();

    std::cout << guest1(2) << std::endl;
    std::cout << guest2(2) << std::endl;
    std::cout << guest3(2) << std::endl;

    std::cout << "---" << std::endl;    // start testing operator usage

    guest1();



    return 0;
}


