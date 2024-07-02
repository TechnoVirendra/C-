/*
WAP to read an array of elements and print the same in the reverse order
along with their addresses using pointer
*/
#include<stdio.h>
int main()
{
	int n,i,arr1[15];
	int *p;
	printf("\n\n Pointer : Print the elements of an array in reverse order :\n");
	printf("........................................................................\n");
	printf("Input the number of elements to store in the array(max 15) :\n");
	scanf("%d",&n);
	p=&arr1[10];
	printf("Input %d number of elements in the array :\n",n);
	for(i=0;i<n;i++)
	{
		printf("Element - %d :",i++);
		scanf("%d",p);
		p++;
	}
	p=&arr1[n-1];
	printf("\n The elements of array in reerse order are :");
	for (i=n;i>0;i--)
	{
		printf("\nelement - %d :%d",i,*p);
		p--;
	}
	printf("\n\n");
	return 0;
}
