#include<iostream>
using namespace std;
int main()
{
	int num,c;
	cout<<"Enter any number = ";
	cin>>num;
	while(num!=0)
	{
		num=num/10;
		c=c+1;
	}
	cout<<"Number of digits = "<<c;
	return 0;
}
