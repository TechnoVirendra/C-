#include<iostream>
using namespace std;
void func(){
	int n;
	cin>>n;
	if(n%4==0)
		cout<<"NO\n";
	else
		cout<<"YES\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		func();
	}
	return 0;
}
