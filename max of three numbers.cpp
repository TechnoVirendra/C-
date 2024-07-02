//write a program to find the max of three number.
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c)
			cout<<a<<" is max number out of three"<<endl;
		else
			cout<<c<<" is max number out of three"<<endl;
	}
	else{
		if(b>c)
			cout<<b<<" is max number out of three"<<endl;
		else
			cout<<c<<" is max number out of three"<<endl;
	}
	return 0;
}
