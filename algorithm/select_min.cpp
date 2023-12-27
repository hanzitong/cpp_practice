

#include <iostream>
#include <vector>


namespace compare_func
{
double select_min(const std::vector<double> input){
    double min = input[0];

    for(int i=1; i<input.size(); i++){
        if(min >= input[i]) min = input[i];
    }

    return min;
}
}




int main(int argc, char **argv){
    double min;
    std::vector<double> vec1 = {1.9, 1.2, 4.4, 0.2, 5.3};
    min = func::select_min(vec1);

    std::cout << "final:" << min << std::endl;

    return 0;
}




