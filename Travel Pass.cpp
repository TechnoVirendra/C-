#include<iostream>
using namespace std;
int main(){
	int t,i;
	cin>>t;
	while(t--){
		int n,a,b,ca=0,cb=0;
		cin>>n>>a>>b;
		for(i=0;i<n;i++){
			string s;
			cin>>s;
			if(s=="0")
				ca++;
			else
				cb++;
			
			}
			cout<<a*ca + b*cb<<endl;
	}
	return 0;
}
