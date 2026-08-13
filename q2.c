//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.//
#include <stdio.h>
int main()
{
int a;
int b;
printf("Enter the value of a \n");
scanf("%d", &a);
printf("Enter the value of b \n");
scanf("%d",&b);
printf("The sum is is %d \n", a+b);
printf("The difference is %d \n", a-b);
printf("The product is %d \n", a*b);
printf("The quotient is %d \n", a/b);
return 0;
}