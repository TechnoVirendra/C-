#include<stdio.h>
int main()
{
	int num,rev=0,s;
	printf("Enter The Number :");
	scanf("%d",&num);
	s=num;
	while(s!=0)
	{
		rev=rev*10+s%10;
		s/=10;
	}
	printf("Reverse = %d",rev);
	return 0;
}
