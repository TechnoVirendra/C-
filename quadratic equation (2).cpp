#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int s,p,a,b,c;
	cout<<"Enter Sum of Two Number : ";
	cin>>s;
	cout<<"Enter Product of Two Number : ";
	cin>>p;
	if(s>0)
		cout<<"Quadratic eqn formed is : X*X-"<<s<<"+"<<p<<endl;
	else
		cout<<"Quadratic eqn formed is : X*X+"<<s<<"+"<<p<<endl;
	a=1;
	b=-s;
	c=p;
	cout<<"coefficients are : a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
	double d,r1,r2;
	d = b*b-4.0*a*c;
	double sqroot;
	sqroot=sqrt(d);
	r1=(-b-sqroot)/(2.0*a);
	r2=(-b+sqroot)/(2.0*a);
	cout<<"Number 1 :"<<r2<<endl<<"Number 2 :"<<r1<<endl;
	return 0;
}
