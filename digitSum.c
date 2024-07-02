#include<stdio.h>
void main()
{
int n,dummy,sum=0,rem;
printf("enter the no.\n");
scanf("%d",&n);
dummy=n;
while(n>0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("the sum of all digit of %d is %d ",dummy,sum);
}
