#include<stdio.h>
void main()
{
int marks[10],sum=0,n,i;
float avg=1.0;
printf("enter the no. of student\n");
scanf("%d",&n);
printf("enter the marks\n");
for(i=0;i<n;i++)
{
scanf("%d",&marks[i]);
sum=sum+marks[i];
}
avg=(float)sum/n;
printf("average marks =%f",avg);
}
