//Q6: Write a program to swap two numbers using a third variable.//
#include <stdio.h>
int main()
{
int a;
int b;
int c;
printf("Enter a \n");
scanf("%d", &a);
printf("Enter b \n");
scanf("%d", &b);
c=a;
a=b;
b=c;
printf("After swapping: a=%d, b=%d \n", a, b);
return 0;
}