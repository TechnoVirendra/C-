#include<stdio.h>
void main()
{
int n,i,count;
printf("enter the no.");
scanf("%d",&n);
count=1;
for(i=2;i<n/2;i++)
{
    if(n%i==0)
    {
     count=count+1;
    }
    else
    {
    count=count;
    }
}
if(count==1)
    printf("%d is prime no.",n);
else
    printf("%d is not prime no.",n);
}
