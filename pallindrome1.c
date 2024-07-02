#include<stdio.h>
void main()
{
int n,rem,dummy,rev=0;
printf("enter the no.");
scanf("%d",&n);
dummy=n;
while(dummy>0)
{
rem=dummy%10;
rev=rem+rev*10;
dummy=dummy/10;
}
if(n==rev)
printf("the no. %d is pallindrome no.",n);
else
printf("the no. %d is not pallindrome no.",n);
}
