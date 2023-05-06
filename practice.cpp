#include <iostream>




void keisan(int x[]){   // arg == array 
    int i;
    int sum = 0;
    for(i=0; i<3; i++){
        sum += x[i];
    }

    std::cout << sum/3 << "\n";
}



int main(void){
    int i = 0;
    int array[3] = {1, 2, 3};

    keisan(array);  // arg = address of array[3]

    
    return 0;
}



