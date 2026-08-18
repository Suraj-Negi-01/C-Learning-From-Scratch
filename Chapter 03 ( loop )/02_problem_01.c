#include <stdio.h>

int main (){

    int num ;
    int i=0;

    while (i<5){

    printf("Enter the num :");
    scanf("%d",&num);

    if (num % 2 == 0){

        printf("The num %d is even \n",num);
    }
    else {

        printf("the num is odd \n");
    }
    i++;

                }
}
