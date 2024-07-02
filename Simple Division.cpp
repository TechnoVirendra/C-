#include<iostream>

using namespace std;

int main(){
	int t,r;
	cin>>t;
	while(t--){
		int n,x,y;
		cin>>n>>x>>y;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int count=0;
		for(int i=0;i<n;i++){
			if((arr[i]<=x)&& (arr[i]%y==0))
				count++;
			else
				count=count;
		}
		cout<<count<<endl;
	}
	return 0;
}
