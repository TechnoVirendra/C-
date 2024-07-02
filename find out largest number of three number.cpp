#include<iostream>
using namespace  std;
int main()
{
	int x,y,z;
	cout<<"Enter Three Numbers : ";
	cin>>x>>y>>z;
	if(x>y && y>z)
	cout<<x<<" is Largest Number";
	else if(y>x && x>z)
	cout<<y<<" is Largest number";
	else if(z>x && x>y)
	cout<<z<<" is Largest number";
	return 0;
}
