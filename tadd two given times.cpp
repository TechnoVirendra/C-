/*
Write a C language program to Add Two given dates (day, month and year) form using structure and functions.
*/
#include<stdio.h>
void add();

struct date
{
	int day;
	int month;
	int year;
};
void add(){
	int a,b,c;
	int g,e,f;
	int x,y,z;
	struct date d1,d2;
	a=d1.day;
	b=d2.day;
	c=a+b
	g=d1.month;
	e=d2.month;
	f=g+e;
	x=d1.year;
	y=d2.year;
	z=x+y;
	printf("Sum of date :%d",c);
	printf("Sum of month :%d",f);
	printf("Sum of year :%d",z);
}

int main()
{
	struct date d1,d2;
	printf("Enter 1st day,month and year :\n");
	scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
	printf("Enter 2nd day , month and year :\n");
	scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
	add();
}

