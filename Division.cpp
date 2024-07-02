#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,a,b,i,cnt=0;
    	cin>>n>>a>>b;
    	for(i=2;i<=n;i++){
    		if((i%2==0) && (n%i==0))
    			cnt+=a;
    		else if((i%2!=0) && (n%i==0))
    			cnt+=b;
		}
		cout<<cnt<<"\n";
	}
    return 0;
}
