
#include <iostream>


main() {
    int N, M;
    std::cin >> N;
    M = N;

    std::cout << "-------" << std::endl;

    while (N--) {   // check condition first, then decrement N
    /*
    0: false
    other: true
    */
        std::cout << N << std::endl;
    }

    std::cout << "-------" << std::endl;

    while (--M) {   // decrement N first , then check condition
        std::cout << M << std::endl;
    }   

}

