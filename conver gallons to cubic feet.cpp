// Assuming that there are 7.841 gallons in a cubic foot, Write a program that asks the user to enter the number of gallons, and then display the equivalent in cubic feet.
#include<iostream>
using namespace std;
int main()
{
	float g,c;
	cout<<"Enter the number of gallons =";
	cin>>g;
	c=g/7.841;
	cout<<"Cubic Feet =" <<c;
	return 0;
}
