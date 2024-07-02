/*
Write a program in C to show how a function returning pointer.
*/
#include<stdio.h>
int* small(int *,int *);
int main()
{
	int a,b,*r;
	printf("Enter First Number :");
	scanf("%i",&a);
	printf("Enter Second Number :");
	scanf("%i",&b);
	r=small(&a,&b);
	printf("The number %d is Smaller.",r);
}

int* small(int *a,int *b)
{
	if(*a<*b)
	return a;
	else
	return b;
}
