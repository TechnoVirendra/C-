#include<stdio.h>
void main()
{
int n,dummy,rem,rev=0;
printf("enter the no.");
scanf("%d",&n);
dummy=n;
while(n>0)
{
  rem=n%10;
  rev=rem+rev*10;
  n=n/10;

}
printf("the reverse of %d is %d",dummy,rev);
}
