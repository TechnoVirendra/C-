#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the Size of Array \n");
	scanf("%d",&n);
	int i,a[n];
	printf("Enter Array Elements \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum = %d\n",sum);
	return 0;
}
