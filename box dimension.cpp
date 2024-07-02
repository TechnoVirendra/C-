#include<iostream>
using namespace std;
struct box{
	int len,bre,hei;
};
void dimension(box b)
{
	cout<<b.len<<"X"<<b.bre<<"X"<<b.hei<<endl;
}
int main()
{
	box b1;
	cout<<"Enter Length breadth and height :"<<endl;
	cin>>b1.len>>b1.bre>>b1.hei;
	dimension(b1);
	return 0;
}
