#include <stdio.h>

int main (){

    int count =0, digit , num , sum =0;

    printf("Enter num :");
    scanf("%d",&num);

    while (num != 0 )
    {
        digit = num % 10;
        sum += digit;
        count++; 
        num /=10;
    }

    printf("The sum of digit is : %d\n",sum);
    printf("Total num are : %d\n",count);
    
}