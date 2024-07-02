//q1)Write a program to add Temperature in Fahrenheit in decimal values (upto one precision) using structure and functions.
//Q2)Write a C language program to Add Two given dates (day, month and year) form using structure and functions.
#include<stdio.h>
struct temp{
	float cel;
	float fahr;
};
float tem(float);
int main()
{
	float a;
	struct temp t1;
	printf("Enter the Temperature in celsius :");
	scanf("%f",&t1.cel);
	temp();
	printf("\nTemperature in Fahrenheit : %2f\n",a);
	
}
float tem(struct temp)
{
	temp.fahr=(1.8*temp.cel)+32.0;
	return temp.fahr;
}

