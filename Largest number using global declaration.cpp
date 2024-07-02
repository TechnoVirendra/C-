#include<stdio.h>
int a=78,b=98,c=45;
int main()
{
	printf("Three Number are %d\t%d\t%d\n",a,b,c);
	if(a>b && a>c)
	printf("%d is the largest number of %d %d",a,b,c);
	else if(b>a && b>c)
	printf("%d is the largest number of %d %d",b,a,c);
	else if(c>a && c>b)
	printf("%d is the largest number of %d %d",c,a,b);
	return 0;
}
