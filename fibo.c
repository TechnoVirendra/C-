#include<stdio.h>
void main()
{
int a=0,b=1,n,i,c=0;
printf("enter the no.of terms ");
scanf("%d",&n);
printf("Fibonacci series:%d %d ",a,b);
for(i=2;i<n;i++)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
}
}
