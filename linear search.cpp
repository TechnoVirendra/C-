#include<stdio.h>
int main()
{
	int a[20],i,x,n;
	printf("Enter How many Elements :");
	scanf("%d",&n);
	printf("Enter array Elements :");
	for  (i=0;i<n;++i)
		scanf("\t%d",&a[i]);
	printf("\nEnter Element to search =");
	scanf("%d",&x);
	for  (i=0;i<n;++i){
	if(a[i]==x)
	break;}
	if (i<n)
	printf("Element found at index = %d",i);
	else
	printf("Element not found");
	return 0;
}
