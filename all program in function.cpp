#include<stdio.h>
int add(int,int);
int sub(int,int);
int main()
{
	int a,b,c,d;
	printf("Enter 1st Number :");
	scanf("%d",&a);
	printf("Enter 2nd Number :");
	scanf("%d",&b);
	c=add(a,b);
	printf("\nSum of Two number =",c);
	d=sub(a,b);
	printf("\nSub of two number =",d);	
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int sub(int x,int y)
{
	int d;
	if (x>y)
	d=x-y;
	else if (x<y)
	d=y-x;
	else
	d=x-y;
	return d;
}
