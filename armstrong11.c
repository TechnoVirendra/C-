#include<stdio.h>
void main()
{
int n,dummy,rem,sum=0;
printf("enter the no.\n");
scanf("%d",n);
dummy=n;
while(n>0)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
}
if(dummy==sum)
printf("the no.%d is armstrong no.",dummy);
else
printf("the no %d is not armstrong no.",dummy);
}
