#include<stdio.h>
void main()
{
int a[20],i,size,max,max2,pos,temp[20];
printf("enter the size");
scanf("%d",&size);
printf("enter the no.s");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
pos=0;
for(i=0;i<size;i++)
{
if(a[i]>max)
{
max=a[i];
pos=i;
}
}
for(i=0;i<size-1;i++)
{
if(i<pos)
temp[i]=a[i];
if(i>=pos)
temp[i]=a[i+1];
}
max2=temp[0];
printf("\n");
for(i=0;i<size-1;i++)
{
if(temp[i]>max2)
max2=temp[i];
}
printf("first largest no is %d\nsecond largest is %d",max,max2);
}
