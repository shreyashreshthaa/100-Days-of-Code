//Q7: Write a program to swap two numbers without using a third variable.//
#include <stdio.h>
int main()
{
int a;
int b;
printf("Enter a \n");
scanf("%d", &a);
printf("Enter b \n");
scanf("%d", &b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping: a=%d, b=%d \n", a, b);
return 0;
}