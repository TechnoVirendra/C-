/* for rows= 5
				* * * * *
				 * * * *
				  * * *
				   * *
				    *
*/
#include<stdio.h>
int main()
{
	int n=1,i,j;
	unsigned int rows =0;
	printf("Enter the Number of Rows = ");
	scanf("%u",&rows);
	for(i=1;i<=rows;i++)
	{
		for (j=1;j<=i;++j)
		{
			printf(" ");	
		}
		for(j=((rows*2)-((2*i)-1));j>=1;--j)
		{
			printf("*");
		}
		printf("\n");}
	}

