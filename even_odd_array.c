#include<stdio.h>
void main()
{
int a[20],i,size;
printf("enter the size");
scanf("%d",&size);
printf("enter the no");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("even no.s are:\n");
for(i=0;i<size;i++)
{
if(a[i]>=0)
{if(a[i]%2==0)
printf("%d\n",a[i]);
}
}
printf("odd no.s are:\n");
for(i=0;i<size;i++)
{
if(a[i]>=0){
if(a[i]%2==1)
printf("%d\n",a[i]);
}
}
}
