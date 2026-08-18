#include <stdio.h>

int rev (int n){

    int static ret = 0 ;
    if (n==0)
    return ret;

    int digit = n % 10;
    ret =  ret *10 + digit ;

    return rev (n / 10);


}

int main (){

    printf("The reversed num is : %d",rev(123));
}