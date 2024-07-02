#include<stdio.h>

int main()
{
    int marks[10], n, i, sum=0, avg;
    printf("enter the no. of students");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        printf(" marks in subnect %d : ",i);
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    avg=sum/n;
    printf("average = %d",avg);
	return 0;
}

	
