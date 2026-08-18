#include <stdio.h>

int main (){

    int i ;

    // 01. Syntax of for loop

    printf("From for loop :\n");
    for (i=1; i<11; i++){

        printf("%d\n",i);
    }

    // 02. Syntax of while loop

    printf("From while loop :\n");
    i=1;
    while (i<11){

        printf("%d\n",i);
        i++;
        }

    // 03. Do while loop

    printf("From do-while loop :\n");
    i=1;
    do{
        printf("%d\n",i);
        i++;
    }
    while (i<11);
}