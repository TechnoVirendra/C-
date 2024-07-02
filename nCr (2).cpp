#include<iostream>
using namespace std;
int fact(int n){
	int fact=1,i;
	for(i=2;i<=n;i++)
		fact*=i;
	return fact;
}
int main(){
	int n,r,res;
	cin>>n,cin>>r,cout<<endl;
	res=fact(n)/(fact(n-r)*fact(r));
	cout<<res<<endl;
	return 0;
}
