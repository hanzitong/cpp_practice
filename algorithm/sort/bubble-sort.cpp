
#include <iostream>
#include <boost/timer/timer.hpp>
/* 
link boost_timer & boost_system explicitly when compiling.
$ g++ selection-sort.cpp -lboost_timer -lboost_system
*/
#include <algorithm>

#define N 10000

// sort min ~ max
void bubble_sort(int* arr, int size){

    for (int i=0; i<size-1; ++i) {
        for (int j=0; j<size-i-1; ++j) {
            if (arr[j] > arr[j+1]) std::swap(arr[j], arr[j+1]);
        }
    }

}


int main() {
    int arr[N];
    int arr2[N];    // for check
    for (int i=0; i<N; ++i) {
        arr[i] = rand() / 10000;
        arr2[i] = arr[i];
    }

    boost::timer::auto_cpu_timer t_bubble;
    bubble_sort(arr, N);
    std::cout << "bubble: " << t_bubble.format() << std::endl;

    boost::timer::auto_cpu_timer t_std;
    std::sort(arr2, arr2+N);
    std::cout << "std: " << t_std.format() << std::endl;

    for (int i=0; i<N; ++i) {
        if (arr[i] != arr2[i]) std::cout << "different at culum : " << i << std::endl;
    }


    return 0;
}



