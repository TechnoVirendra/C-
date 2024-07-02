/*
Practical 9.4: Store N student records including fields name, First MST marks .Second MST

marks ,lecture attended ,Lecture delivered , If student got average marks of two MST

&amp;gt;=80 ,He/She will beeligible for taking exams without taking care of attendance

otherwise attendance should be &amp;gt;=75%.Print name of all those students who are

detained from final exams

Press Shift + Tab to nav

avg>80+75;


*/
#include<stdio.h>
struct student{
	char name[15];
	int mst1;
	int mst2;
	int lect_att;
	int lect_del;
};
void  display(struct student);
int main()
{
	struct student s1;
	int n,i;
	printf("Enter the Number of student :");
	scanf("%i",&n);
	for (i=0;i<n;i++)
	display(s1);
	return 0;
	
	
}
void display(struct student s1)
{
	int i,j,avg;
	printf("Enter The Name of student :");
	scanf("%s",&s1.name);
	printf("Enter The marks in mst 1 and mst 2  :");
	scanf("%i%i",&s1.mst1,&s1.mst2);
	printf("Enter the lecture attended :");
	scanf("%i",&s1.lect_att);
	printf("Enter the Lecture delivered :");
	scanf("%i",&s1.lect_del);
	i=(s1.lect_att *100)/s1.lect_del;
	j=s1.mst1+s1.mst2;
	avg=j/2;
	if (avg>=80 && i>=75)
	{
		printf("beeligible");
	}
	else
	printf("detained");
}

