#include<iostream>
using namespace std;
struct customer{
	char name[20];
	int units;
	float charge;
}c1;
int main()
{
	cout<<"Enter Name of Customer = ";
	cin>>c1.name;
	cout<<"Enter number of units Consumed = ";
	cin>>c1.units;
	if(c1.units<=100)
	c1.charge=c1.units * 0.40;
	else if(c1.units<=200)
	c1.charge=c1.units * 0.50;
	else if(c1.units<=300)
	c1.charge=c1.units * 0.60;
	cout<<"Name = "<<c1.name<<"\n"<<"Charge = "<<50+c1.charge;
	return 0;
}
