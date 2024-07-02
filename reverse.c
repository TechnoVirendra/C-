#include<stdio.h>
void main()
{
int n,rem,temp,rev=0,base;
printf("enter the no.");
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("the reverse of %d is %d",temp,rev);
}
