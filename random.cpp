
#include <iostream>
#include <random>


int main(void){
    int i;
    double a = 0.;
    double b = 0.;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis_real(0., 100.);
    std::uniform_real_distribution<double> dis_2(10., 100.);

    for (i=0; i<10; ++i){
        double random_num = dis_2(gen);
        std::cout << random_num << std::endl;
    }

    return 0;
}





