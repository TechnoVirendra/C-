#include<stdio.h>
void main()
{
int n,rem,rev=0,dummy;
printf("enter the no.");
scanf("%d",&n);
dummy=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(rev==dummy)
printf("the no. %d is pallindrome no.",dummy);
else
printf("the no %d is not pallindrome no.",dummy);
}
