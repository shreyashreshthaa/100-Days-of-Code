//Q5: Write a program to convert temperature from Celsius to Fahrenheit.//
#include <stdio.h>
int main()
{
float temperature;
printf("Enter temperature in Celcius \n");
scanf("%f", &temperature);
printf("Temperature in Kelvin is %f \n", (temperature*1.8)+32);
return 0;
}