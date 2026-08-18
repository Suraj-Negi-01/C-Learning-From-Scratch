#include <stdio.h>

// 01. Using recursion 
int fact (int n){

    if (n == 0 )
        return 1;

return n* fact(n-1);

}

// 02. Using loop 

void printnum (){

    int n = 5, fact = 1 ;
    for (int i=1; i<=n; i++){

            fact = fact * i ;       
    }

    printf("The factorial of num %d is : %d",n,fact);
}

int main (){

   int n=5;
   printf  ("The factorial of num %d is : %d\n",n,fact(n)); // calling the factorial function

    printnum();                                              // calling the loop function
}