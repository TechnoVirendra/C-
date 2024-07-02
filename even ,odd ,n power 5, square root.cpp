#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Enter any Number :";
	cin>>n;
	if(n%2==0)
	cout<<"n^5 = "<<pow(n,5);
	else
	{
		if(n>0)
		cout<<"Square root of"<<n<<"is "<<sqrt(n);
		else
		cout<<"n^5 ="<<pow(n,5);
	}
	return 0;
}
