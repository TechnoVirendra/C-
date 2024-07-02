#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		string str;
		cin>>str;
		int lb=0,rb=0,i=0;
		while(str[i]!=NULL){
			int e = (int)str[i];
			if(e==40)
				lb++;
			else
				rb++;
			i++;
		}
		if(lb<=rb)
			cout<<lb*2<<endl;
		else
			cout<<rb*2<<endl;
	}
	return 0;
}
