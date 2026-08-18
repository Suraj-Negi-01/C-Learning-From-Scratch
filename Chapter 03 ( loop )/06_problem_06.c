#include <stdio.h>

int main (){

    int num , org , digit=0 , sum =0 ,count =0,pow=1;
    
    printf("Enter the num : ");
    scanf("%d",&num);

    org = num ; 

    while (num !=0)
    {
        num = num / 10;
        count++;
    }

    num = org;

while (num!=0 )
    {
        digit = num % 10 ;
        for (int i =1; i<=count; i++){

            pow = pow * digit;
        }

        sum = sum + pow ; 
        num /= 10 ;
    }

    if (sum == org ){

    printf("THe num is armstrong ");

    }
    else {
    printf("THe num is not a armstrong ");

    }
    
}