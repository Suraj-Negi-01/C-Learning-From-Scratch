#include <stdio.h>

void fun1 (void);                 //  01. function with no parameter or no return type
void fun2 (int a);               //  02. function with  parameter but no return type
int  fun3 (int a, int b);        //  03. function with  parameter or  return type
int  fun4 (void);                //  04. function with no parameter but return type



int main (){

    fun1();                     // calling first function 
    fun2(10);                   // calling second function
    fun3(10,10);                // calling third function
    fun4();                     // calling fourth function
   
}

// 01. function with no parameter or no return type

void fun1 (void){

    printf("01. function with no parameter or no return type\n");
    printf("hello guyss !\n\n");
}

// 02. function with  parameter but no return type

void fun2 (int a){
    
    printf("02. function with  parameter but no return type\n");
    printf("the num is : %d\n\n",a);
}

//  03. function with  parameter or  return type

int fun3(int a, int b){

    int f = a+b;
    printf("03. function with  parameter or  return type\n");
    printf("the sum is : %d\n\n",f);

}

//  04. function with no parameter but return type

int fun4(){
    
    int c=4;
    printf("04. function with no parameter but return type\n");
    printf("the num is : %d\n\n",c);
    

}