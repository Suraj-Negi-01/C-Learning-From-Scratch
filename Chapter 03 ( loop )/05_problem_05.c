#include <stdio.h>

int main (){

    int num , org , rev=0, digit;

    printf("Enter the num : ");
    scanf("%d",&num);

    org = num ;

    while (num != 0 )
    {
        digit = num % 10 ;
        rev = rev * 10 +digit ;
        num /= 10;
    }


    num = org;

    printf("The reversed num is : %d\n",rev);

if (rev == org)
    printf ("The given number %d is palindrome\n",num);
    
else 
    printf("THe num %d is not palindrome \n",num);
}