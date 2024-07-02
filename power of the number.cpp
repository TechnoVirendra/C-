#include<stdio.h>
#include<math.h>
int main()
{
	int e,b,t;
	printf("Enter the base :");
	scanf("%d",&b);
	printf("Enter the exponent");
	scanf("%d",&e);
	if (e>0)
	{	t=pow(b,e);			
		printf("%d\n",t);}
	else
		printf("No");
	return 0;
}
