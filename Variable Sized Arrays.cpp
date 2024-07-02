#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,q,i,j;
	cin>>n>>q;
	vector<int> a[n];
	for(i=0;i<n;i++){
		int m;
		cin>>m;
		int o;
		for(j=0;j<m;j++){
			cin>>o;
			a[i].push_back(o);
		}
	}
	int r,s;
	for(j=0;j<q;j++){
		cin>>r>>s;
		cout<<a[r][s]<<endl;
	}
	return 0;
}
