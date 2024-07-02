/*
WAP to read an array of elements and print the same in the reverse order along with their addresses using pointer.
*/
#include<stdio.h>
int main()
{
	int n,i;
	int *pt;
	printf("\n\nPointer : Print the elements of an array in reverse order :\n");
	printf("____________________________________________________________\n");
	printf("Enter the Number of elements to store in the array: \n");
	scanf("%d",&n);
	int arr[n];
	pt=&arr[0];
	printf("Enter %d number of element in the array : \n",n);
	 for(i=0;i<n;i++)

   {
            printf(" element - %d : ",i+1);
            scanf("%d",pt);
            pt++;
           }         

	pt=&arr[n-1];
	printf("\n The elements of array in reverse order are :");
for (i = n; i > 0; i--)

  {
     printf("\n element - %d : %d ", i, *pt);
     pt--;
  }
	printf("\n\n\tGoodBye User \n\t    AND \n\t Try Again\n\n");
	return 0;
}

