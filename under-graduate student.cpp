/* Write a program to input following details of a under-graduate student

i       Name (string)

ii      Age (integer)

iii     Contact number (long long integer)

iv     Percentage in metric class (float / double)

Your program should generate output as follows:

**************STUDENT DATABASE*******************

Enter name in capital letters: xyz pqr

Enter age                           : 18

Enter contact number        : 9876543210

Enter percentage in metric : 86.84

Thank you. Your data has been saved in our system

************************************************************             */
#include<stdio.h>
int main()
{
	int a;
	char n[15];
	long long c_no;
	float p_m;
	printf("Enter Name of Students :");
	scanf("%s",&n);
	printf("Enter Age :");
	scanf("%d",&a);
	printf("Enter Contact Number :");
	scanf("%lld",&c_no);
	printf("Enter Percentage in metric class :");
	scanf("%f",&p_m);
	printf("Name of student = %s\n",n);
	printf("Age = %d",a);
	printf("\nContact Number = %lld",c_no);
	printf("\nPercentage in metric class = %f",p_m);
	return 0;
}
