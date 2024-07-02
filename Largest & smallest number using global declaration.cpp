#include<stdio.h>
int a,b;
int main()
{
	printf("Enter Two Number : ");
	scanf("%d%d",&a,&b);   
	if(a==b)
	printf("Both the Number is equal. ");
	else if(a>b)
	{
		printf("Largest number is %03d\n",a);	//0n n=number for ex--> 03 =000
		printf("Smallest Number is %03d\n",b);
	}
	else
	{
		printf("Largest Number is %03d\n",b);
		printf("Smallest Number is %03d\n",a);
	}
	return 0;
}
