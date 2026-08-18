#include <stdio.h>

int main (){

    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);

if (marks < 1 || marks > 100){

    printf("Invalid ! marks try again");

}
else 
{
    if (marks >= 90){

        printf("Congratulation ! you got A+ grade\n");
    }
    else if (marks>=80)
    {
        printf("Congratulation ! you got A grade\n");
    }
    else if (marks >=65) {

        printf("Congratulation ! you got B grade ");
    }
    else if (marks >=55) {

        printf("You got C grade ");
    }
    else if (marks >=40) {

        printf("You got D grade ");
    }
    else {
        printf ("Sorry ! try next year");
    }
    
    
}

}