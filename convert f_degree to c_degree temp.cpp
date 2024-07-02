/*
Temperature of a city in fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into centigrade degrees.
*/
#include<stdio.h>
int main()
{
	float f_degree;int c_degree;
	printf("Enter the Fahrenheit degrees = ");
	scanf("%f",&f_degree);
	c_degree=(f_degree-32)*5/9;
	printf("Centigrade degrees = %d",c_degree);
	return 0;
}
