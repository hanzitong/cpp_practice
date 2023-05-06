/*
This code is for practicing structure in cpp.
*/

#include <stdio.h>


struct human{
    char name[128];
    int hight;
    int weight;
};

int main(void){
    struct human han = {"hanzitong", 179, 65};
    struct human *p;
    p = &han;
    printf("name:%s\n", (*p).name);
    printf("hight:%d\n", (*p).hight);
    printf("weight:%d\n", p->weight);

    return 0;
}





