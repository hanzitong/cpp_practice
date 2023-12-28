/*
insertion_sort() is faster than insertion_sort_revize() why ????
*/

/* case 1 N=60000
    insertion_sort ----- 
2.938379s wall, 2.940000s user + 0.000000s system = 2.940000s CPU (100.1%)
    insertion_sort_revize ----- 
3.790675s wall, 3.790000s user + 0.000000s system = 3.790000s CPU (100.0%)
*/

/* case 2 N=50000
    insertion_sort ----- 
2.043123s wall, 2.040000s user + 0.000000s system = 2.040000s CPU (99.8%)
    insertion_sort_revize ----- 
2.622756s wall, 2.620000s user + 0.000000s system = 2.620000s CPU (99.9%)
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <boost/timer/timer.hpp>

#define N 50000


/*
If use std::vector's function, this program is not efficient.
vec.insert() & vec.erase() shift elements two times in total.
*/
void insertion_sort(std::vector<int> &vec){
    for (int i=1; i<vec.size(); ++i) {  // culumn i to be moved
        for (int j=0; j<i; ++j) {   // culumn j to be inserted
            if (vec[j] >= vec[i]) {
                std::vector<int>::iterator it = vec.begin() + j;
                vec.insert(it, vec[i]);
                it = vec.begin() + i + 1;
                vec.erase(it);
                break;
            }
        }
    }

    return;
}

void insertion_sort_revize(std::vector<int> &vec){
    for (int i=1; i<vec.size(); ++i) {
        int j = i - 1;
        int target = vec[i];
        while (j >= 0 && vec[j] > target) {  // shift
            vec[j+1] = vec[j];
            --j;
        }
        vec[j+1] = target;
    }

    return;
}


int main(int argc, char* argv[]) {
    // std::vector<int> vec = {3, 4, 2, 28, 39, 45, 28, 25, 100, 33, 1};
    // insertion_sort_revize(vec);
    // for (std::vector<int>::iterator it=vec.begin(); it != vec.end(); ++it) {
    //     std::cout << *it << std::endl;
    // }

    std::vector<int> vec1 (N, 0);
    std::vector<int> vec2 (N, 0);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 999);
    for (int i=0; i<N; ++i) {
        int val = distrib(gen);
        vec1[i] = val;
        vec2[i] = val;
    }

    boost::timer::auto_cpu_timer timer1;
    insertion_sort(vec1);
    std::cout << "insertion_sort ----- \n" << timer1.format() << std::endl;

    boost::timer::auto_cpu_timer timer2;
    insertion_sort_revize(vec2);
    std::cout << "insertion_sort_revize ----- \n" << timer2.format() << std::endl;



    return 0;
}



