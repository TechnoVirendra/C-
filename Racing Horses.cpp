#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr.begin();arr.end());
		int arr1[n];
		for(i=0;i<n;i++){
			int d;
			d=arr[i]-arr[i+1];
			arr1.push_back(d);
		}
		sort(arr1.begin();arr1.end());
		cout<<arr1[0]<<"\n";
	}
	return 0;
}
