#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		char s[n];
		cin>>s;
		stack<char> st;
		int ans=0;
		for(int i=0;i<n;i++){
			if(s[i]=='(') {	
				st.push(s[i]);
			}
			else if(s[i]==')'){
				if(!st.empty() and st.top()=='('){
					st.pop();
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
