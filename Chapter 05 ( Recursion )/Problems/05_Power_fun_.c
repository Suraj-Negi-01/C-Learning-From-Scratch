#include <stdio.h>

int power (int x , int n){

    if (n==0)
    return 1;

    printf("%d * ",x);
    return x * power (x,n-1);
}

int main (){

    printf(" 1 = %d",power(2,5));
}