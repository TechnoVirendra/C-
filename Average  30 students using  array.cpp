#include<stdio.h>
int main()
{
	int avg,sum=0;
	int i;
	int marks[30];	// array declaration.
	printf("Enter Marks :");
	for (i=0;i<=29;i++)
	scanf("%d",&marks[i]);
	for (i=0;i<=29;i++)
	sum+=marks[i];
	avg=sum/30;
	printf("Average marks = %d\n",avg);
	return 0;
}
