/*
for n=5
		* * * * * 
		* * * * *
		* * * * *
		* * * * *
		* * * * *
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter Number Rows and Columns :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
