#include<stdio.h>
int main()
{
	int marks[10],n,i,sum=sum+marks[i],avg=sum/n;
	printf("Enter any Element :");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter The Number",i);
		scanf("%d",&marks[i]);		
		}
	printf("Sum = %d",sum);
	printf("Average = %d",avg);
	return 0;
}

