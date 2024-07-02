/*
write a program to add temperature in Fahrenheit in decimal values (upto one precision ) using structure and functions.
*/
#include<stdio.h>
struct temp{
	int a;
	int b;
};
void display(struct temp);
int main()
{
	struct temp t1;
	printf("Enter The temperature in Fahrenheit : ");
	scanf("%d%d",&t1.a,&t1.b);
	display(t1);
	return 0;	
}
void display(struct temp t1)
{
	float sum;
	sum=t1.a+t1.b;
	printf("add temperature in Fahrenheit = %1f",sum);
}
