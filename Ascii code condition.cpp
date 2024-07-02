#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter any Character :";
	cin>>c;
	int a;
	a=c;
	if(a>=97 && a<=122)
	cout<<"The Upper case character corresponding to <char> is ...";
	else if(a>=65 && a<=90)
	cout<<"The Lower case character corresponding to <char> is ...";
	else
	cout<<"<char> is not a letter";
	return 0;
}
