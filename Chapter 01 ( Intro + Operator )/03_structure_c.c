// 1. Documentation sectoin
     /*hey this is documentation section where we usually 
       writes about the programme*/

// 2. Link section (preprocesser directives)
#include <stdio.h>
#include <math.h>

// 3.Defination section 
#define number = 40

void greet (); // function call

// 4. Global var declaration
int a=5,b=2;

// 5. Main function
int main (){

// 6. Local var declaration section
      int c=3,d=5;

// 7. Executable statment section (logical part)
      int sum = a+b+c+d;
      printf("the sum is = %d\n",sum);
   

// program call 
greet();

}
// 8. Subprogram section 

void greet (){

    printf("program ended succesfully !");
}