#include<stdio.h>
void main()
{
int i,n,a=0,b=1,sum;
printf("enter no.of terms ");
scanf("%d",&n);
printf("Fibonacci series:%d\n%d\n",a,b);
for(i=2;i<n;i++)
{
sum=a+b;
a=b;
b=sum;
printf("%d \n",sum);
}
}
