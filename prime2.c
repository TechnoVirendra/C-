#include<stdio.h>
void main()
{
int n,i,count=0,j;
printf("enter the no.");
scanf("%d",&n);
printf("the prime no.s upto %d\n",n);
for(i=1;i<=n;i++)
{
    count=0;
    for(j=1;j<=i;j++)
    {

if(i%j==0)
{
count++;
}
}
if(count==2)
{
printf("%d\n",i);
}
}
}
