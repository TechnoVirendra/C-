// Fibonacci series program.
#include<stdio.h>
void fibonacci(int num);
int main()
{
	int num;
	printf("Enter any Number :");
	scanf("%d",&num);
	fibonacci(num);
	return 0;
}
void fibonacci(int num)
{
	int a=0,b=1,c,i=3;
	if(num == 1)
	printf("%d",a);
	else if(num >=2)
	printf("%d\t%d",a,b);
	while (i <=num)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
		i++;
	}
}
