// What a C++ program to input length and width and find Area of rectangle and also find perimeter of rectangle.
#include<iostream>
using namespace std;
int main()
{
	int l,w,a,p;
	cout<<"Enter The Length of Rectangle :";
	cin>>l;
	cout<<"Enter the Width of Rectangle :";
	cin>>w;
	a=l*w;
	p=2*(l+w);
	cout<<"\nArea of Rectangle = "<<a;
	cout<<"\nPerimeter of Rectangle = "<<p;
	return 0;
}
