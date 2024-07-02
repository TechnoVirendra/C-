#include<iostream>
using namespace std;
int main()
{
	int sum=0,r,num;
	cout<<"Enter any Number = ";
	cin>>num;
	while(num!=0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	cout<<"Sum of Digits = "<<sum;
	return 0;
}
