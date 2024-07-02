#include<stdio.h>
void main()
{
int i,size,pos=0,neg=0,num[100];
printf("enter the size\n");
scanf("%d",&size);
printf("enter the all no.s\n");
for(i=0;i<size;i++)
{scanf("%d",&num[i]);
}
for(i=0;i<size;i++)
{
if(num[i]>0)
pos=pos+num[i];
if(num[i]<0)
neg=neg+num[i];
}
printf("the sum of positive no. is %d\n",pos);
printf("the sum of negative no. is %d\n",neg);
}
