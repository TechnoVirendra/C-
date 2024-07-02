#include<stdio.h>
int main()
{
	int c,f,l,m,n,s,a[100];
	printf("Enter number of element \n");
	scanf("%d",&n);
	printf("Enter %d integers\n",n);
	for (c=0;c<n;c++)
	scanf("%d",&a[c]);
	printf("Enter Value to find\n");
	scanf("%d",&s);
	f=0;
	l=n-1;
	m=(f+l)/2;
	while(f<=l){
		if(a[m]<s)
		f=m+1;
		else if(a[m]==s){
			printf("%dfound at location %d\n",s,m+1);
			break;
		}
		else
		l=m-1;
		m=(f+l)/2;
	}
	if (f>l)
	printf("Not Found %d is not present in the list\n",s);
	return 0;
}
