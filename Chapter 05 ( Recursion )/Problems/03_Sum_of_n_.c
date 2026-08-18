#include <stdio.h>

int sum(int n ){

    if (n==1){
    printf("1");
    return 1;
    }

    printf("%d + ",n);
    return n + sum (n-1);
}

int main (){

    int n=10;
    int result;

    result = sum(n);
    printf("= %d",result);
}