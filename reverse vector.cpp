#include<iostream>
using namespace std;
int main(){
	int n,i,p;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0,p=n-1 ; i<n/2 ; i++,p--){
		arr[i]+=arr[p];
		arr[p]=arr[i]-arr[p];
		arr[i]=arr[i]-arr[p];
	}
	for(i=0;i<n;i++)
		cout<<arr[i]<<endl;
	return 0;
}
