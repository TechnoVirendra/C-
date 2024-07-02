#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,x,r;
	cout<<"Enter Any Number : ";
	cin>>num;
	x=num;
	while(num!=0)
	{
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}
	if(sum==x)
	cout<<"\nNumber "<<x<<" is a Amstrong.";
	else
	cout<<"\nNumber "<<x<<" is a not Amstrong.";
	return 0;
}
