
#include <stdio.h>
#include <string.h>
// strlen
// strcpy
// strcat



main(){
    char str1[10] = {"nihao "};
    char str2[10];

    // strcpy(str1, str2); // cpy str2 to str1
    strcpy(str2, str1); // cpy str1 to str2

    str1[1] = '!';
    str1[9] = '!';
    str2[3] = '\0';
    strcat(str2, "\n");     // add \n to last of str2
    for (int i=0; i<strlen(str1); ++i) {
        printf("%s", str1);
        printf(str2);       // not recommended usage
    }
    

}

