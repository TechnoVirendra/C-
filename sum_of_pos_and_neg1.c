#include<stdio.h>
void main()
{
int marks[20],i,pos=0,neg=0,n;
printf("enter the no.");
scanf("%d",&n);
printf("enter the positive and neg marks\n");
for(i=0;i<n;i++)
{
scanf("%d",&marks[i]);
}
for(i=0;i<n;i++)
{
if(marks[i]>0)
pos=pos+marks[i];
if(marks[i]<0)
neg=neg+marks[i];
}
printf("sum of +ve no. is %d \nand sum of -ve no. is %d",pos,neg);
}
