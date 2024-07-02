#include<stdio.h>
struct student{
	int Roll;
	char name[15];
	char Branch[15];
	int year;
}s1;
int main()
{
	printf("Enter Roll.no Name Branch Year :");
	scanf("%i%s%s%i",&s1.Roll,&s1.name,&s1.Branch,&s1.year);
	printf("Roll.no :%i\nName :%s\nBranch :%s\nYear :%i",s1.Roll,s1.name,s1.Branch,s1.Roll);
	return 0;
}
