// Write a c++ program that inputs a student's marks in three subjects (out of 100) and prints the percentage marks.
#include<iostream>
using namespace std;
int main()
{
	int sub1,sub2,sub3,total,percentage;
	cout << "Enter Marks of three Subjects :";
	cin >> sub1 >> sub2 >>sub3;
	total=sub1+sub2+sub3;
	percentage=total/3;
	cout << "Percentage =" << percentage;
	return 0;
}

