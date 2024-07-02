#include<stdio.h>
struct book{
	char name[15];
	char city[10];
	int con;
	
}b1;
struct input{
	int *pt;
	pt=&b1;
	printf("Enter Name :");
	scanf("%s",p->name);
	printf("Enter City :");
	scanf("%s",p->city);
	printf("Enter Contact number :");
	scanf("%i",p->con);
}i1;
int main()
{
	printf("Name =%s\nCity =%s\nContact Number =%i",b1.name,b1.city,b1.con);
	return 0;
}

