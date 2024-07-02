/*
WAP to store a character string in block of memory space created by malloc and then modify the same to store a large string.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,i;
	char p;
	char *pt;
	printf("Enter Max number of character :");
	scanf("%d",&n);
	pt=&p;
	pt=(char *)malloc(n*sizeof(char));
	if (pt==NULL)
	{
		printf("No Memory allocation ...");
		exit(0);
	}
	printf("Enter any string :");
	for (i=0;i<n;i++)
	scanf("%s",pt+i);
	*(pt+i)='\0';
	printf("You wrote %s",pt);
	fflush(stdin);
	printf("\nEnter new size\n");
	scanf("%d",&n);
	p= realloc(p,n*sizeof(char));
	puts("\nEnter new string please");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%c",pt+i);
	*(pt+i)='\0';
	printf("You wrote %s\n",p);
	free(p);
	return 0;
	
}
