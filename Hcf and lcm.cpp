#include"iostream"
using namespace std;
int main()
{
	int num1,num2,s,lcm,hcf,i;
	cout<<"Enter The Two Number : "<<endl;
	cin>>num1>>num2;
	if(num1>num2)
	s=num1;
	else
	s=num2;
	for(i=1;i<=s;i++)
	{
		if((num1%i==0)&&(num2%i==0))
		hcf=i;
	}
	cout<<"Hcf of Two Number : "<<hcf<<endl;
	lcm=(num1*num2)/hcf;
	cout<<"Lcm of Two Number : "<<lcm<<endl;
	return 0;
}
