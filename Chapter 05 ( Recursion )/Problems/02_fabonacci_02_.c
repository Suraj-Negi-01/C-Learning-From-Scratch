#include <stdio.h>

void fabo (int n, int a, int b){

    if (n==0)
    return ;

   printf("%d ",a);
   fabo(n-1, b, a+b);

}

int main (){

    int n = 10; 
    printf("The fibonacci series is : ");
    fabo(n,0,1);

   
}