#include<stdio.h>
void is_leap(int year);
int main()
{
	int year;
	printf("Enter Any Year :");
	scanf("%d",&year);
	is_leap(year);
	return 0;
}
void is_leap(int year)
{
	if ((year%400==0)||(year%4==0)and(year%100!=0))
	printf("%d Leap Year",year);
	else
	printf("%d Not a Leap Year",year);
}
