/*
Write a C++ program that reads temperature in Celsius and displays it in Fahrenheit .
*/
#include<iostream>
using namespace std;
int main()
{
	float c,a,f;
	cout << "Enter The Celsius Degree :";
	cin >> c;
	f=(c*9/5)+32;
	a=(f-32)*5/9;
	cout<<"Fahrenheit = " << f <<"\n"<<"Celsius =" <<a ;
	return 0;
}
