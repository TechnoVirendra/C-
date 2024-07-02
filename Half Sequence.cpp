#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b){
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			
		}
		for(i=0;i<n;i++){
			j=gcd(a[i],a[i+1]);
			
		}
		int r;
		r=round(n/2);
		
		
	}
}
