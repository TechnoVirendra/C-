#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if((a+b+c)<=d)
			cout<<"1\n";
		else if((a+c)<=d)
			cout<<"2\n";
		else if((a+b)<=d)
			cout<<"2\n";
		else if(a<=d && b<=d && c<=d)
			cout<<"3\n";	
	}
	return 0;
}
