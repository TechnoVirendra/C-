/*
program 1:- Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary & house rent allowance is 20% of basic salary. Write a program to 
Calculate his gross salary usin structure . 
*/
#include<stdio.h>
struct salary{
	float t_salary;
	float h_rent;
	float g_salary;
	float dearness;
}s1;

int main()
{
	printf("Enter Total Salary = ");
	scanf("%f",&s1.t_salary);
	s1.dearness=(s1.t_salary*40)/100;
	s1.h_rent=(s1.t_salary*20)/100;
	s1.g_salary=s1.t_salary-(s1.dearness+s1.h_rent);
	printf("Gross Salary = %f",s1.g_salary);
	
	return 0;
}
