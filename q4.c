//Q4: Write a program to calculate the area and circumference of a circle given its radius.//
#include <stdio.h>
int main()
{
int radius;
printf("Enter radius of the circle \n");
scanf("%d", &radius);
printf("The circumference of the rectangle is %f \n", 2*3.14*radius);
printf("The area of the circle is %f \n", 3.14*radius*radius);
return 0;
}