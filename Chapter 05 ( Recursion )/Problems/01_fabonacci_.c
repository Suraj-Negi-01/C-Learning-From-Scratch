#include <stdio.h>

int fabo (int n){

    if (n==0)
    return 0;
    
    if (n==1)
    return 1;

   return fabo(n-1) + fabo (n-2);

}

int main (){

    int n = 3; 
    printf("The fibonacci series is : ");
    for (int i=0; i<n; i++){

        printf("%d ",fabo(i));
    }
   
}