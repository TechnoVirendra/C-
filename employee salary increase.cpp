/*
Write a structure to store the names, salary and hours of work per day of 10 employees in a company.
 Write a program to increase the salary depending on the number of hours of work per day as follows 
 and then print the name of all the employees along with their final salaries.

Hours of work per day 8         10       >=12

Increase in salary       $50     $100   $150
*/
#include<stdio.h>
struct Employee
{
	char emp_name[15];
	float emp_salary;
	float emp_hours;
};
int main()
{
	int i,n;
	printf("Enter the Number of Employees :");
	scanf("%d",&n);
	struct Employee emp;
	for (i=0;i<n;i++)
	{
		printf("Enter Employee Name :\n");
		scanf("%s",&emp.emp_name);
		printf("Enter Employee Salary :\n");
		scanf("%f",&emp.emp_salary);
		printf("Enter Employee working Hours :\n");
		scanf("%f",&emp.emp_hours);
		if(emp.emp_hours==8){
		emp.emp_salary+=50;
		printf("Name=%s salary=%f hours=%f\n",emp.emp_name,emp.emp_salary,emp.emp_hours);
	}
		else if(emp.emp_hours==10)
		{
			emp.emp_salary+=100;
			printf("Name=%s Salary =%f hours=%f\n",emp.emp_name,emp.emp_salary,emp.emp_hours);
		}
		else if(emp.emp_hours>=12)
		{
			emp.emp_salary+=150;
			printf("Name=%s Salary =%f hours=%f\n",emp.emp_name,emp.emp_salary,emp.emp_hours);
		}
		else
		printf("Name=%s Salary =%f hours=%f\n",emp.emp_name,emp.emp_salary,emp.emp_hours);
		
	}
	return 0;
}
