// Swapping Two number.
#include<stdio.h>
int swapping1(int , int);
int swapping2(int , int);
int main()
{
	int a,b,c,d;
	printf("Enter Two Numbers :\n");
	scanf("%d%d",&a,&b);
	printf("\nBefor Swapping the numbers :\n%d\t%d\n",a,b);
	c=swapping1(a,b);
	swapping2(a,b);
	return 0;
}
int swapping1(int a, int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("1st After Swapping the Numbers :\n%d\t%d\n",a,b);
}
int swapping2(int a, int b)
{
	int c;
	c=a+b;
	a=c-a;
	b=c-b;
	printf("2nd After Swapping the Numbers :\n%d\t%d\n",a,b);
}

