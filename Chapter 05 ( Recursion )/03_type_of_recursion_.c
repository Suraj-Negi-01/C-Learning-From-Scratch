 #include <stdio.h>

 // 01. Direct recursion
int fact (int n){

    if (n == 0 )
        return 1;

return n* fact(n-1);

}

// 02. Indirect recursion 
void odd (int);
void even (int);

void odd (int n){

    if (n==0){
        return ;
    }
    printf("odd\n");
    even (n-1);

}
void even (int n){

    if (n==0){
        return ;
    }
    printf("even\n");
    odd (n-1);

}

// 03. Tali (Accumulator) recursion
int facto (int n , int result){
    
    if (n==0)
       return result;

    return facto(n-1, result*n);
}

// 04. Global var method
int f=1 ;
int factor (int num){

    if (num==0){

        return 1 ;
    }
    f = f * num;
    factor (num-1);
}

// 05. Pointer method 

int factorial (int n, int *facct){

    if (n==0)
    return 1;

    *facct= (*facct)*n;
    factorial(n-1,facct);
}

int main (){
 
// 01. Direct recursion
//    int n=5;
//    printf  ("The factorial of num %d is : %d\n",n,fact(n));


// 02. Indirect recursion 
// odd (5);


// 03. Tali (Accumulator) recursion
// int n=5 ;
// printf("The factorial of num %d is : %d\n",n,facto(n,1));


// 04. Global var method
    // int num = 5;
    // factor(num);
    // printf("The factorial of num %d is : %d\n",num,f);

// 05. Pointer method 

//     int facct = 1;
//     factorial(5,&facct);
//     printf("THe factorial of num is : %d",facct);
}