#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter limit of array : ");
	scanf("%d",&n);
	long long sum=0,arr[n];
	printf("Enter Number : \n");
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Sum = %lld",sum);
	return 0;
}
