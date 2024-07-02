#include<iostream>
using namespace std;
int main()
{
	int num,i,f=0;
	cout<<"Enter The Number : ",cin>>num;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			f=1;
			break;
		}
		
	}
	if(f==0)
	cout<<num<<" is Prime Number !!!";
	else
	cout<<num<<" is Not Prime Number !!!";
	return 0;
}
