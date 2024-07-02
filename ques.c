#include<stdio.h>
void main()
{
int i,count,rem,temp;
printf("even no. :");
for(i=1000;i<=3000;i++)
{
temp=i;
count=0;
while(temp>0)
{
rem=temp%10;
if(rem%2==0)
count++;
temp=temp/10;
}
if(count==4)
{
printf("%d ,",i);
}
}
}
