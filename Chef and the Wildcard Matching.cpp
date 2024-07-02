#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string x,y;
		int count=0,i;
		cin>>x>>y;
		for(i=0;i<x.size();i++){
			if(x[i]==y[i])
				count++;
			else if((x[i]=='?'))
				count++;
			else if((y[i]=='?'))
				count++;
		}
		if(count==x.size())
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
