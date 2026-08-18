#include <stdio.h>

int main(){

    double num1,num2;
    char operator;

    printf("====CALCULATOR====\n");

    printf("Enter first num :");
    scanf("%lf",&num1);

    while (1)
    {
        
            printf ("Enter operator (-,+,*,/,%) :");
            scanf(" %c",&operator);
        
        if (operator == '+' || operator == '-' || operator == '*' || operator == '%' || operator == '/' ){
    
            printf("Enter second num :");
            scanf("%lf",&num2);
            break;
        }
        else{
    
            printf("Please select correct operator !\n");
        }
    }

switch (operator)
{
    case '+':
        printf("The sum is : %lf",num1+num2);
        break;
    
    case '-':
        printf("The sub is : %lf",num1-num2);
        break;

    case '*':
        printf("The mul is : %lf",num1*num2);
        break;

    case '%':
        printf("The sub is : %lf",(int)num1 % (int)num2);
        break;

    case '/':
        
        if (num2!=0){
        printf("The div is : %lf",num1/num2);
        break;
        }
        else {

            printf("Invalid ! divided by zero");
        }

}


    
}