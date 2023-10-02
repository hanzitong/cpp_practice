

#include <iostream>


void display_array(const int *head_ptr, const int num)
{
    for(int i = 0; i<num; i++){
        for(int j = 0; j<num; j++){
            std::cout << head_ptr[i][j] << " "
        }
        std::cout << std::endl;

    }


    return;
}




int main(int argc, char *argv[]){
    int array_2d[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int num = 3;
    display_array(array_2d, 3);

    for(int i = 0; i<num; i++){
        for(int j = 0; j<num; j++){
            std::cout << array_2d[i][j] << " ";
        }
        std::cout << std::endl;

    }



    return 0;
}







