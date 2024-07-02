#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(ch=='V' || ch=='v'){
		int i,j,space;
		for(i=1;i<=5;i++){
			for(j=1;j<=i;j++)
				cout<<j;
			space=2*5-2*i;
			for(j=1;j<=space;j++)
				cout<<" ";
			for(j=i;j>=1;j--)
				cout<<j;
			cout<<endl;
			
		}
	}
	return 0;
}
