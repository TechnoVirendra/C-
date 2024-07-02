#include<stdio.h>
void main()
{
int n,fact=1,i;
printf("enter the no.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d!=%d",n,fact);
}
