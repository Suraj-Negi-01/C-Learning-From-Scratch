#include <stdio.h>

void fun (int *a){

    *a+=10;
    printf("Value inside the fun is a = %d\n",*a);

}
int main (){

    int a = 10;
    printf("Value inside the main is a = %d\n",a);


    fun(&a);

    printf("But after the function call value is a = %d\nMeans the value not remains same as declared in main ",a);
    printf("\nThe change in function also accur in the original value");
}