/*
    topic: how variable decralation position affects execution time 
*/

#include <iostream>
#include <boost/timer/timer.hpp>    // this lib requires extra link option: -lboost_timer -lboost_system


void ShortVariable_loop_inside(void){
    for (int i=0; i<1000000; ++i) {
        int variable;
        variable = 99;
    }

    return;
}
void ShortVariable_loop_outside(void){
    int variable;
    for (int i=0; i<1000000; ++i) {
        variable = 99;
    }

    return;
}

void LongVariable_loop_inside(void){
    for (int i=0; i<1000000; ++i) {
        int array[100000];
        array[500] = 99;
    }

    return;
}
void LongVariable_loop_outside(void){
    int array[100000];
    for (int i=0; i<1000000; ++i) {
        array[500] = 99;
    }

    return;
}


int main(int argc, char*[]){
    std::cout << "short variable loop inside --------" << std::endl;
    boost::timer::auto_cpu_timer t1;
    ShortVariable_loop_inside();
    std::cout << t1.format() << std::endl;

    std::cout << "short variable loop outside --------" << std::endl;
    boost::timer::auto_cpu_timer t2;
    ShortVariable_loop_outside();
    std::cout << t2.format() << std::endl;

    std::cout << "long variable loop inside ==========" << std::endl;
    boost::timer::auto_cpu_timer t3;
    LongVariable_loop_inside();
    std::cout << t3.format() << std::endl;

    std::cout << "long variable loop outside --------" << std::endl;
    boost::timer::auto_cpu_timer t4;
    LongVariable_loop_outside();
    std::cout << t4.format() << std::endl;

    std::cout << "==========" << std::endl;



    return 0;
}









