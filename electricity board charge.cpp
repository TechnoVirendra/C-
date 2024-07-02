using namespace std;
#include<iostream>
int main()
{
	int unit;
	float r;
	char name[15];
	cout<<"Enter The Customer Name : "<<endl;
	cin>>name;
	cout<<"Enter the uses of electricity in units : "<<endl;
	cin>>unit;
	if(unit<=100)
	r=unit*0.4+150;
	else if(unit<=200 && unit>100)
	r=unit*0.5+150;
	else if(unit<=300 && unit>200)
	r=unit*0.6+150;
	if (r>=250)
	r+=0.15;
	cout<<"Customer Name = "<<name<<"\nElectricity bill = "<<r;
	return 0;
}
