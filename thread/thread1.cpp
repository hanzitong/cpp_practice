
#include <iostream>
#include <thread>
#include <chrono>   // this library is for handle time


/* thread is executed in */

void printNumbers1() {
    for (int i = 0; i < 10; ++i) {
        std::cout << "thread1: "<< i << ' ' << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void printNumbers2() {
    for (int i = 0; i < 10; ++i) {
        std::cout << "thread2: " << i << ' ' << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
}

int main() {
    /* std::threadオブジェクトが作成された段階でmain関数から枝分かれして独立に実行され，thread.join()のタイミングでmain関数に合流する */
    std::thread thread1(printNumbers1);
    std::thread thread2(printNumbers2);

    thread1.join();     // at this line, thread1 join main thread.
    thread2.join();     // if either sub-thread or main-thread is still not finished, the other one wait it to finish here. 

    return 0;
}
