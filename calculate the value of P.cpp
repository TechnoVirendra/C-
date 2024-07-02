/*
Write a program to read values of w,x,y and z and display the value of P, where p=(w+x)/(y-z) 
*/
#include<iostream>
using namespace std;
int main()
{
	float w,x,y,z,p;
	cout << "Enter The Values of (W X Y Z) :";
	cin >> w >>x >>y >>z;
	p=(w+x)/(y-z);
	cout << "P = " << p;
	return 0;
}
