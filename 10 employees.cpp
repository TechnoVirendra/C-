#include<stdio.h>
#include<string.h>
struct details
{
	char name[15];
	float salary;
	float hour;
};
int main()
{
	struct details d;
	puts("Enter Name , Salary and Hours :");
	gets(&d.name,&d.salary,&d.hour);
	if(d.hours==8)
	{
		if (d.hours==10)
		{
			if (d.hours>=12)
			d.salary+=150;
			d.salary+=100;
			d.salary+=50;
		}
	}
	puts("Name ,Salary And Hours ",d.name,d.salary,d.hours);
	return 0;
}
