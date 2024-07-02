// Write a C++ program to convert a given number of days into years, weeks and days.
#include<iostream>
using namespace std;
int main()
{
	int y,w,d,n,t_d;
	cout<<"Enter Total number of days : ";
	cin>>t_d;
	y=t_d/365;
	n=t_d%365;
	w=n /7;
	d=n%7;
	cout<<"Year = "<<y <<"\n"<<"Weeks = "<<w<<"\n"<<"Days = "<<d<<"\n";
	return 0;
}
