#include<stdio.h>
void main()
{
int i,size,a[100],temp[50],max,max2,pos;
printf("enter the size\n");
scanf("%d",&size);
printf("enter all no.s\n");
for(i=0;i<size;i++)
{scanf("%d",&a[i]);
}
max=a[0];
pos=0;
for(i=0;i<size;i++)
{
if(a[i]>max){
max=a[i];
pos=i;}
}
for(i=0;i<size-1;i++)
{if(i<pos)
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
printf("the first largest no. is %d\n",max);
printf("the second largest no. is %d\n",max2);
}
