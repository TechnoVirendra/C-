/*
Write a C language program to Add Two given dates (day, month and year) form using structure and functions.
*/
#include<stdio.h>
struct date{
	int day1;
	int month1;
	int year1;
	int day2;
	int month2;
	int year2;
};
void display(struct date);
int main()
{
	struct date d1;
	printf("Enter day ,month and year :");
	scanf("%d%d%d",&d1.day1,&d1.month1,&d1.year1);
	printf("Enter day ,month and year :");
	scanf("%d%d%d",&d1.day2,&d1.month2,&d1.year2);
	display(d1);
	return 0;
}
void display(struct date d1)
{
	int sum1,sum2,sum3;
	sum1=d1.day1+d1.day2;
	sum2=d1.month1+d1.month2;
	sum3=d1.year1+d1.year2;
	printf("Add Two given dates=%d\t%d\t%d",sum1,sum2,sum3);
}
