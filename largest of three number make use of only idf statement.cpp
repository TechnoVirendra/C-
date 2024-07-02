// Program to accept three integers and print the largest of the three. Make  use of only if statement.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cout<<"Enter Three Numbers : ";
	cin>>a>>b>>c;
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	cout<<max<<" is largest number ";
	return 0;
}
