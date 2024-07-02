/*
1.1) Write a program to input following details of an under-graduate student 
I)       Name (string) 

ii)      Age (integer) 

iii)    Contact number (longlong integer) 

iv)  Percentage in metric class (float / double) 

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char name[15];
	int age;
	long long contact_number;
	float percentage;
	printf("Enter Name of the Student :");
	scanf("%s",&name);
	printf("Enter Age of the Student :");
	scanf("%d",&age);
	printf("Enter Contact Number of the Student :");
	scanf("%ld",&contact_number);
	printf("Enter Percentage of 12th :");
	scanf("%f",&percentage);
	printf("Name = %s\nAge = %d\nContact number = %ld\nPercentage = %f\n",name,age,contact_number,percentage);
	return 0;
}
