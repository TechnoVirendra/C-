#include<stdio.h>
void main()
{
int marks[20],n,i,max=0,min=0;
printf("enter the size.\n");
scanf("%d",&n);
printf("enter the no.s \n");
for(i=0;i<n;i++)
{
scanf("%d",&marks[i]);
}
for(i=0;i<n;i++)
{
max=marks[0];
min=marks[0];
if(marks[i]>max)
max=marks[i];
if(marks[i]<min)
min=marks[i];
}
printf("the max marks is %d\n the min marks is %d",max,min);
}
