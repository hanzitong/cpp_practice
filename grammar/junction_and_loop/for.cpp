
#include <iostream>

/*
for(a; b; c;)
a: initialize
b: condicional expression
c: process after one loop finished

1. do a
2. check b if true or false
3. do process inside the for-loop if b is true
3. break for-loop if b is false
4. do c
5. check b again

i++ : expression and add
++i : add and expression

*/


int main()
{
    // 0 ~ 4 (5 outputs)
    for (int i=0; i<5; ++i) {
        std::cout << i << std::endl;
    }

    // 0 ~ 5 (6 outputs)
    for (int i=0; i<=5; ++i) {
        std::cout << i << std::endl;
    }

    // 1 ~ 5 (4 outputs)
    for (int i=1; i<5; ++i) {
        std::cout << i << std::endl;
    }


    return 0;
}


/* old code */
// int main(){
//     int i;
//     int sum = 0;

//     for(i=0; i<10; i++){
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;
//     std::cout << i << std::endl;

//     i = 0;
    
//     for(i=0; i<10; ++i){
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;
//     std::cout << i << std::endl;

//     return 0;
// }
