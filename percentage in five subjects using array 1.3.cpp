/*
If the Marks ontained by a student in five different subject are input through the keyboard, Write a program to find out the aggregate marks and percentage marks obtained
by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100. using Array. 
*/
#include<stdio.h>
int main()
{
	int sub[5],t_mark=0,i;
	float p_mark;
	printf("Enter marks =\n");
	for(i=0;i<5;i++)
	{
	scanf("%d",&sub[i]);
	t_mark+=sub[i];
	}
	p_mark=t_mark/5;
	printf("Total marks = %d\nPercentage marks =%f\n",t_mark,p_mark);
	return 0;
}
