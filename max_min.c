#include<stdio.h>
void main()
{
int i,num[100],size,max=0,min=0;
printf("enter the size\n");
scanf("%d",&size);
printf("enter all the no.s\n");
for(i=0;i<size;i++)
{
scanf("%d",&num[i]);
}
min=num[0];
max=num[0];
for(i=0;i<size;i++)
{
if(num[i]>max)
max=num[i];
if(num[i]<min)
min=num[i];
}
printf("max no.%d\n",max);
printf("min no.%d\n",min);
}
