#include<iostream>
using namespace std;
int main(){
	int n,m,r;
	cin>>n>>m;
	char ch;
	cin>>ch;
	if(ch=='+')
		r=n+m;
	else if(ch=='-')
		r=n-m;
	else if(ch=='*')
		r=n*m;
	else if(ch=='/')
		r=n/m;
	cout<<r;
	return 0;
}
