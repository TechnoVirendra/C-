#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,n;
	cout<<"Enter3-digits number : ";
	cin>>num;
	while(num!=0)
	{
		n=num%10;
		rev=(n*10);
		num=num/10;
	}
	cout<<"Reverse = "<<rev;
}
