
#include <iostream>
#include <vector>
#include <boost/timer/timer.hpp>
/* 
link boost_timer & boost_system explicitly when compiling.
$ g++ selection-sort.cpp -lboost_timer -lboost_system
*/


void selection_sort(int *arr, int size) {
    int min_index = 0;

    for (int i=0; i<size; ++i) {
        min_index = i;
        for (int j=i+1; j<size; ++j) {
            if (arr[min_index] > arr[j]) min_index = j;
        }
        std::swap(arr[i], arr[min_index]);
    }

    return;
}

int main() {
    int vec[10000];
    for (int i=0; i<10000; ++i) {
        vec[i] = rand() % 10000;    // generate random number (old method)
    }

    boost::timer::auto_cpu_timer t;
    selection_sort(vec, 10000);
    std::cout << "time for selection sort : " << t.format();
    // std::cout << t.format();


    return 0;
}

