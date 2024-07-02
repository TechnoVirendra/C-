#include<iostream>
using namespace std;
int main()
{
	float principal,time;
	cout<<"Enter the Principal amount : ";
	cin>>principal;
	cout<<"Enter the Time to pay the principal amount : ";
	cin>>time;
	if(time>10)
	cout<<"Simple Interest = "<<(principal*time*8)/100;
	else
	cout<<"Simple Interest = "<<(principal*time*12)/100;
	return 0;
}
