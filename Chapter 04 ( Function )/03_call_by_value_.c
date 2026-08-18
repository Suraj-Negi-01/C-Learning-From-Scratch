#include <stdio.h>

void fun (int a){

    a+=10;
    printf("Value inside the fun is a = %d\n",a);

}
int main (){

    int a = 10;
    printf("Value inside the main is a = %d\n",a);


    fun(a);

    printf("But after the fun called value is a = %d\nMeans the value remains same as declared in main ",a);
    printf("\nThe change in function not affect in the original value");
}