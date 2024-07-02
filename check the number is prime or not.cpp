#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,f=0,num;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
		num=arr[i];
	}
	
	for(j=2;j<num;j++){
		for(i=0;i<n;i++){
		
		if(num%j==0){
			f=1;
			break;
		}
		}
	}	
	for(i=0;i<n;i++){
		if(f==0)
			cout<<"Yes";
		else
			cout<<"No";
	}
	
	return 0;
	
}
