#include<iostream>
using namespace std;
int main()
{
	int r,ch;
	float area,perimeter;
	cout<<"1.Area of circle "<<"\n"<<"2. Perimeter of Circle"<<"\n"<<"Choice (1 or 2) :";
	cin>>ch;
	cout<<"Enter Radius of Circle :";
	cin>>r;
	if(ch==1)
	{
		area=3.14*r*r;
		cout<<"Area Of Circle = "<<area;
	}
	else if(ch==2)
	{
		perimeter=3.14*2*r;
		cout<<"Perimeter of Circle = "<<perimeter;
	}
	return 0;
}
