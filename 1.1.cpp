#include<stdio.h>
int main()
{
	int i,j,t,n,a,b;
	printf("Enter Number of element in array :");
	scanf("%i",&n);
	int arr[n],*pt;
	pt=&arr[0];
	printf("Enter the Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("element %d:",++i);
		scanf("%i",pt+i);
	}
	for(i=0;i<n;i++)
	{
		a=*(pt+i);
		for(j=0;j<n;j++)
		{
			b=*(pt+j);
			if(a>b)
			{
				t=a;
				a=b;
				b=t;
			}
			
		}
	}
	printf("After Sorting element :");
	for (i=0;i<n;i++)
	printf("element %d:%d",++i,(pt+i));
	return 0;
}
