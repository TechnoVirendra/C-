//Practical 1.1: WAP to find average marks of five subjects of a student in a class.
#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,m4,m5,avg,total;
	cout<<"Enter marks of five subjects :"<<endl;
	cin>>m1>>m2>>m3>>m4>>m5;
	total=m1+m2+m3+m4+m5;
	avg=total/5;
	cout<<"Total marks of five subjects are : "<<total<<endl;
	cout<<"Average marks of five subjects are : "<<avg<<endl;
	return 0;
}
//
/*
step 1: - start
step 2: - read m1,m2,m3,m4,m5
step 3: - calculate total=m1+m2+m3+m4+m5
step 4: - calculate avg=total/5
step 5: - print Total and Average marks of five subjects 
step 6: - stop
*/
