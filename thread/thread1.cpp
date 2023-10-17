

#include <iostream>
#include <vector>
#include <thread>


void hello(int threadID){
    std::cout << "hello from thread" << threadID << std::endl;
}


int main(int argc, char*argv[]){
    const int num_thread = 5;

    std::vector<std::thread> threads;

    /* for watching behibior of std::thread() */
    std::thread(hello, 99);

    for (int i; i<num_thread; ++i) {
        threads.push_back(std::thread(hello, i));
    }

    for (std::thread &thread : threads) {
        thread.join();
    }

    return 0;
}



