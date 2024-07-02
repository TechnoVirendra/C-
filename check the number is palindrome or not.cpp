#include<stdio.h>
int main()
{
	int n,rev=0,t;
	printf("Enter A number  :");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		rev=rev*10+t%10;
		t=t/10;
	}
	printf("Reverse The Number = %d",rev);
	if (n==rev)
	printf("\nNumber Is a Palindrome ");
	else
	printf("\nNumber Is a Not Palindrome");
	return 0;
}
