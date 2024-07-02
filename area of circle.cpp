// Write a C++ Program that accepts radius of a circle and prints its area.
#include<iostream>
using namespace std;
int main()
{
	float r,a;
	cout << "Enter The Radius of circle =";
	cin >> r;
	a=3.14*r*r;
	cout <<"Area of Circle = "<< a;
	return 0;
}
