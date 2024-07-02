#include<stdio.h>
void main()
{
int num,i,temp1,sum,rem;
printf("enter the no.");
scanf("%d",&num);
printf("Armstrong no. are:\n");
for(i=1;i<=num;i++)
{
sum=0;
temp1=i;
while(temp1>0)
{
rem=temp1%10;
sum=sum+rem*rem*rem;
temp1=temp1/10;
}
if(sum==i)
printf("%d\n",sum);
}
}
