//Q8: Write a program to find and display the sum of the first n natural numbers.//
#include <stdio.h>
int main()
{
int n;
printf("Enter n \n");
scanf("%d", &n);
printf("Sum of first n natural numbers is %d \n", n*(n+1)/2);
return 0;
}