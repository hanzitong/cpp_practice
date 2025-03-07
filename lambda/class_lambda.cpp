
#include <iostream>
#include <vector>
#include <string>


class Mul{
    private:
        int i_;
    public:
        Mul(int i): i_(i) {
            // pass
        }

        int operator() (int j) {
            return i_ * j;
        }

        void givenval_printer(int i) {
            std::cout << i_ << std::endl;
        }
};

int main() {
    Mul doubler = Mul(2);

    std::cout << doubler(5) << std::endl;
    doubler.givenval_printer(2);

    return 0;
}
