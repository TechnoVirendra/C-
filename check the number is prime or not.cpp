#include<stdio.h>
int main()
{
	int a,p=1;
	printf("Enter the Number :");
	scanf("%d",&a);
	for (int i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			int p=0;
			break;
		}
	}
	if (p==1)
	printf("%d is prime",a);
	else
	printf("%d is not prime",a);
	return 0;
}
