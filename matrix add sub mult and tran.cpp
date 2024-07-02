/*
Write a program to perform various matrix operations Addition, Subtraction, Multiplication, Transpose using switch-case statement.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,ch,r1,c1,r2,c2;
	printf("Enter row and column size of 1st matrix : ");
	scanf("%d%d",&r1,&c1);
	printf("Enter row and column size of 2nd matrix : ");
	scanf("%d%d",&r2,&c2);
	int x[r1][c1],y[r2][c2],z[r1][c2];
	puts("Enter 1st matrix elements : ");
	for( i=0;i<r1;i++)
	for (j=0;j<c1;j++)
	scanf("%d",&x[r1][c1]);
	puts("Enter 2nd matrix elements : ");
	for( i=0;i<r2;i++)
	for (j=0;j<c2;j++)
	scanf("%d",&y[r2][c2]);
	printf ("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\nEnter your choice: \t");
	scanf("%d",ch);
	switch(ch)
	{
		case 1:if(r1!=r2||c1!=c2)
		{
			printf("Addition not possible");
			break;
		}
		for( i=0;i<r1;i++)
		for( j=0;j<c1;j++)
		x[i][j]+=y[i][j];
		printf("Addition of two matrix is...");
		for(int i=0;i<r1;i++)
		{
			for( j=0;j<c1;j++)
			printf("%d\t",x[i][j]);
			printf("\n");
		}
		break;
		case 2:if(r1!=r2||c1!=c2)
		{
			printf("Subtraction not possible");
			break;
		}
		for( i=0;i<r1;i++)
		for( j=0;j<c1;j++)
		x[i][j]-=y[i][j];
		printf("Subtraction of two matrix is...");
		for( i=0;i<r1;i++)
		{
			for( j=0;j<c1;j++)
			printf("%d\t",x[i][j]);
			printf("\n");
		}
		break;
		case 3:if(c1!=r2)
		{
			printf("Multiplication not possible");
			break;
		}
		for( i=0;i<r1;i++)
		{
			for( j=0;j<c1;j++)
			{
				z[i][j]=0;
				for(k=0;k<c1;k++)
				z[i][j]+=x[i][k]*y[k][j];
			}
			printf("Multiplication of two matrix is...");
			for( i=0;i<r1;i++)
		{
			for( j=0;j<c2;j++)
			printf("%d\t",z[i][j]);
			printf("\n");
		}
		break;
		case 4:
			printf("Transpose of 1st matrix is...");
			for(i=0;i<c1;i++)
			{
				for(j=0;j<r1;j++)
				printf("%d\t",x[j][i]);
				printf("\n");
			}
			printf("Transpose of 2nd matrix is...");
			for(i=0;i<c2;i++)
			{
				for(j=0;j<r2;j++)
				printf("%d\t",y[j][i]);
				printf("\n");
			}
			break;
			default :
				printf("Invalid input! Please try again");
				break;		
	}
}
	return 0;
}
