#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int cnt=0;
		for(int i=0;i<n;i++){
			if(arr[i]==1)
				cnt++;
			else{
				cnt=cnt;
				break;
			}
		}
		if(cnt>=m){
			if(n==cnt)
				cout<<k*2<<"\n";
			else
				cout<<k<<"\n";
		}
		else{
			cout<<"0\n";
		}
	}
	return 0;
}
