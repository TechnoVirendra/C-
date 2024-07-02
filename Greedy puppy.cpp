#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,m=0,s;
		cin>>a>>b;
		for(int i=1;i<=b;i++){
			s=a%i;
			if(s>m)
				m=s;
		}
		cout<<m<<endl;
	}
	return 0;
}
