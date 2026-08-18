#include <stdio.h>

void printnum (int n){

    if (n>5)
        return;

    printf("%d\n",n);
    printnum(n+1);

}

int main (){

    int n=1;
    printnum(n);
}