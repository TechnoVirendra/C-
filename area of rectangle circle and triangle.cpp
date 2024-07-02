#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int ch;
	cout<<"Enter 1. Area of circle \nEnter 2. Area of Rectangle \nEnter 3. Areavof Triangle"<<endl;
	cin>>ch;
	switch(ch){
		case 1 :
			int r;
			cin>>r;
			cout<<3.14*r*r<<endl;
			break;
		case 2 :
			int l;
			cin>>l>>r;
			cout<<l*r<<endl;
			break;
		case 3 :
			int a,s;
			cin>>a>>r>>l;
			s=(a+r+l)/2;
			cout<<sqrt(s*(s-a)*(s-r)*(s-l))<<endl;
			break;
		default : cout<<"Wrong choice!!!";
		break;
	}
	return 0;
}
