#include<stdio.h>
void main()
{
int i,sum=0,num,marks[50];
float avg;
printf("enter the no. of students\n");
scanf("%d",&num);
printf("enter the marks");
for(i=0;i<num;i++)
{
scanf("%d",&marks[i]);
}
for(i=0;i<num;i++)
{
    sum=sum+marks[i];
}
avg=(float)sum/num;
printf("the avg of class is %f\n",avg);
}
