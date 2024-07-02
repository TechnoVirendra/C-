#include<stdio.h>
void main()
{
int num,rem,temp,sum=0;
printf("enter the no.");
scanf("%d",&num);
temp=num;
while(num>0)
{
rem=num%10;
sum=sum+rem*rem*rem;
num=num/10;
}
if(sum==temp)
printf("the no %d is armstrong no.",temp);
else
printf("the no. %d is not armstrong no.",temp);
}
