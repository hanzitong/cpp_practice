#include <iostream>
#include <math.h>


void sqrt(int);
int add(int x, int y);
double twice(int a);


int main(){
    int x = 40;
    int* xPtr = &x;
    double y = 60.2;
    double *yPtr = &y;
    int s[] = {1, 2, 3, 4};
    int a = 50;
    int* xa = &a;

    std::cout << pt() << "\n";

    return 0;
}

double take_value( int* pt ){
    val = *pt;
    return val;
}


void sqrt(int t){
    int* ptr = &t;
    t = math.sqrt(t);
}


int add(int x, int y){
    int res = x + y;

    return 0;
}


double twice( int a ){
    std::cout << a << std::endl;
    a *= 2.;
    std::cout << a << std::endl;

    return a;
}




