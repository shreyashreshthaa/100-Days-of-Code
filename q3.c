//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.//
#include <stdio.h>
int main()
{
int length;
int breadth;
printf("Enter the value of length \n");
scanf("%d", &length);
printf("Enter the value of breadth \n");
scanf("%d",&breadth);
printf("The perimeter of the rectangle is %d \n", 2*(length+breadth));
printf("The area of the rectangle is %d \n", length*breadth);
return 0;
}