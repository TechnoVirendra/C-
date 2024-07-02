#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,maxno=INT_MIN;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		for(i=0;i<n;i++)
			maxno=max(maxno,arr[i]);
		cout<<maxno<<endl;
	}
	return 0;
}
