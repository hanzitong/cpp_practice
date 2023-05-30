/*
This code is for practicing structure in cpp.
*/

#include <stdio.h>


struct human{
    char name[128];
    int hight;
    int weight;
}Tarou,Hanako;  //declare:Tarou,Hanako 


typedef struct{
    char name[128];
    int score;
}Test;  //define struct Test (structuer)


void line(void){
    char hyphen[20] = "----------";
    printf("%s\n", hyphen);
}


int main(void){
    struct human han = {"hanzitong", 179, 65};
    struct human *p;
    p = &han;
    printf("name:%s\n", (*p).name);
    printf("hight:%d\n", (*p).hight);
    printf("weight:%d\n", p->weight);

    line();

    int i = 0;
    struct human students[3] = {{"a-kun", 150, 40}, {"b", 170, 60}, {"c", 189, 80}};
    struct human *ptr = students;   //set *ptr the head of students array address

    for(i=0;i<3;i++){
        printf("name:%s\nhight;%d\nweight:%d\n", (*(ptr+i)).name, (ptr+i)->hight, (ptr+i)->weight);
    }

    return 0;
}

