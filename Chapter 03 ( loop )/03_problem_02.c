#include <stdio.h>

int main (){

    int a,b,c ;

    printf ("Enter three num :");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c){

        printf("First num %d is greatest",a);

    }
    else if (b>a && b>c){

        printf("Second num %d is greatest",b);
    }
    else {

        printf("Third num %d is greatest",c);

    }
}