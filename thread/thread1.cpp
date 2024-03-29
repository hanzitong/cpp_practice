
#include <iostream>
#include <thread>
#include <chrono>   // this library is for handle time
#include <time>



/* 
Thread is automatically executed when thread object is made
and run independently and finally the sub-thread wait to be called thread.join() line in main-thread.
If thread.detach() is called in main-thread, sub-thread don't join main-thread anymore
so main-thread dont wait sub-thread join.
*/



void printNumbers1() {
    for (int i = 0; i < 10; ++i) {
        std::cout << "thread1: "<< i << ' ' << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "printNumber1 finished" << std::endl;
}

void printNumbers2() {
    for (int i = 0; i < 10; ++i) {
        std::cout << "thread2: " << i << ' ' << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    std::cout << "printNumber2 finished" << std::endl;
}

int main() {
    /* std::threadオブジェクトが作成された段階でmain関数から枝分かれして独立に実行され，thread.join()のタイミングでmain関数に合流する */
    std::thread thread1(printNumbers1);
    std::thread thread2(printNumbers2);

    // at this line, thread1 join main thread.
    // if either sub-thread or main-thread is still not finished, the other one wait it to finish here.     thread1.join();     
    std::cout << "waiting thread2 to join " << std::endl;
    thread2.join();     
    std::cout << "waiting thread1 to join" << std::endl;
    thread1.join();     

    std::cout << "maint thread finish" << std::endl;

    return 0;
}
