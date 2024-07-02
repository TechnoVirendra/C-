#include<stdio.h>
void main()
{
int p,n,res=1,i;
printf("enter the no.\n");
scanf("%d",&n);
printf("enter the power\n");
scanf("%d",&p);
for(i=1;i<=p;i++)
{
 res=res*n;
}
printf("the res is %d",res);
}
