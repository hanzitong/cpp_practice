
#include <iostream>
#include <vector>

/*
array = \
1 2 3
4 5 6
7 8 9

########## memo: ############ 
array[1][2] = 6
array[1] = {4 ,5 ,6}
array[1][2] = {6}
#############################

*/

int main(int argc, char* argv[]){
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // std::cout << array1[1][2] << std::endl;

    int array2[2][2][3] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};
    std::cout << array2[1][1][0] << std::endl;

    return 0;
}
