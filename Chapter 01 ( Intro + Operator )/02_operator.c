#include<stdio.h>

int main (){

//1.Arthmatic operator( -,+,*,/,% )
   int a=10, b=5;
   int sum, sub, mul;
   float div=0, mod=0;

   printf("\n1.Arthmatic operator( -,+,*,/,% )\n");
   printf("sum = %d\n",sum=a+b);
   printf("sub = %d\n",sub=a-b);
   printf("mul = %d\n",mul=a*b);
   printf("div = %.2f\n",div=a/b);
   printf("mod = %.2f\n",mod=a%b);

//2. Relational operators(<,>,<=,>=,==,!=)

    printf("\n2. Relational operators(<,>,<=,>=,==,!=)\n");
    printf("%d\n",a<b);  // if statment right gives 1 either 0
    printf("%d\n",a<=b);
    printf("%d\n",a>b);
    printf("%d\n",a>=b);
    printf("%d\n",a==b);
    printf("%d\n",a!=b);

//3. Bitwise operator (&,|, ^, ~, <<, >>)

      a = 5, b = 3;

        
    printf("\n3. Bitwise operator (&,|, ^, ~, <<, >>)\n");
    printf("\na = %d, b = %d\n", a, b);

    printf("Bitwise AND (a & b)  = %d\n", a & b);      // Bitwise AND
    printf("Bitwise OR  (a | b)  = %d\n", a | b);      // Bitwise OR
    printf("Bitwise XOR (a ^ b)  = %d\n", a ^ b);      // Bitwise XOR 
    printf("Bitwise NOT (~a)     = %d\n", ~a);         // Bitwise NOT
    printf("Left Shift (a << 1)  = %d\n", a << 1);     // Left Shift
    printf("Right Shift (a >> 1) = %d\n", a >> 1);     // Right Shift

//4. Logical operator (&&, ||, !)
    printf("\n4. Logical operator (&&, ||, !)\n");
    printf("%d\n", a>1 && b>10); //Act as and gate in condition 
    printf("%d\n", a>1 || b>10);
    printf("%d\n", !a && !b);

//5. Assignment operator (=,+=,-=,*=,&=,|=,<<=,>>=,^=)

    a=5;
    printf("\n5. Assignment operator (=,+=,-=,*=,&=,|=,<<=,>>=,^=)\n");
    printf("a=%d\n",a);      // 5
    printf("%d\n", a+=5);    //10
    printf("%d\n", a*=2);    //20
    printf("%d\n", a-=10 );  //10
    printf("%d\n", a/=2);    //5
    printf("%d\n", a%=2);    //1
    printf("%d\n", a&=5);    //1 because a=1 so 1 and 5 (0001*0101=0001)
    printf("%d\n", a|=5);    //5 because a=1 so 1 or 5  (0001+0101=0101)
    printf("%d\n", a^=5);   //0 because a=5 so 5 xor 5  (0101^0101=0000)

//6. Teranary operator (conditional)
    // syntax (condition ? expressionp_if_ture : expression_if_false)

    a=10,b=20;
    int c=50;

    printf("\n6. Teranary operator (conditional)\n");
    printf("a=%d , b=%d , c=%d\n",a,b,c);

    int max= (a>b) ? ((a>c) ? a:c):   // Teranary operator
                     ((b>c) ? b:c);

    printf("Maximum num is = %d\n",max);


//7. Unary operator (+,-,++,--,~,size off,!)

    printf("\n7. Unary operator (+,-,++,--,~,size off,!)\n");
    printf("\na=%d\n",+a);
    printf("a=%d\n",-a); // convert into the negative
    printf("a=%d\n",++a); // a=10 to a=11
    printf("a=%d\n",--a); // a=10
    printf("a=%d\n",~a);  // bitwise not ~ used for fliping the bits


}

