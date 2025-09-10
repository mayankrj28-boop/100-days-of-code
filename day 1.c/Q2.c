#include<stdio.h>
int main(){

    int a,b,sum,diff,quotient,product ;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    sum = a+b ;
    printf("sum= %d\n", sum);

    diff = a-b ;
    printf("diff= %d\n", diff);

    printf("product %d\n", a*b);


    printf("quotient %d\n", a/b);

    return 0;


}
