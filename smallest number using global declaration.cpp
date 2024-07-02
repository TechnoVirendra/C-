#include<stdio.h>
int a=79,b=68,c=54;
int main()
{
	if (a<b && a<c)
	printf("%d is the smallest number of %d\t%d",a,b,c);
	else if(b<a && b<c)
	printf("%d is the smallest number of %d\t%d",b,a,c);
	else if(c<a && c<b)
	printf("%d is the smallest number of %d\t%d",c,a,b);
	return 0;
}
