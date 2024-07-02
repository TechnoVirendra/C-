#include<stdio.h>
void main()
{
int n,i,count=0;
printf("enter the no.");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
if(n%i==0)
{count++;
}
}
if(count==1)
{
printf("the no. %d is prime no.",n);
}
else
{
printf("the no. %d is not prime",n);
}
}
