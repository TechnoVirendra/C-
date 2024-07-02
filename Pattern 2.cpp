/*
		for n=5
		* * * * *
		* * * *
		* * *
		* * 
		*
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter Number Of Rows and Columns :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i<=j)
			printf("*");
		}
		printf("\n");
	
	}
	return 0;
}
