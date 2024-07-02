using namespace std;
#include<iostream>
inline void max(int x,int y,int z)
{
	if(x>y && x>z)
	cout<<x<<" is largest number"<<endl;
	else if(y>x && y>z)
	cout<<y<<" is largest number"<<endl;
	else if(z>y && z>x)
	cout<<z<<" is largest number"<<endl;
}
inline void min(int x,int y,int z)
{
	if(x<y && x<z)
	cout<<x<<" is smallest number"<<endl;
	else if(y<x && y<z)
	cout<<y<<" is smallest number"<<endl;
	else if(z<x && z<y)
	cout<<z<<" is smallest number"<<endl;
}
int main()
{
	int x,y,z;
	cout<<"Enter Three Numbers : "<<endl;
	cin>>x>>y>>z;
	max(x,y,z);
	min(x,y,z);
	return 0;
}
