#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b,b);
	return gcd(a,b-a);
}
int common_factor(int a,int b){
	
	int r=0,i;
	for(i=1;i<=sqrt(gcd(a,b));i++){
		if(gcd(a,b)%i==0){
			if(gcd(a,b)/i==i)
				r+=1;
			else
				r+=2;
		}
	}
	return r;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<common_factor(a,b);
	return 0;
}
