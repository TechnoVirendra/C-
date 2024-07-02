#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int len;
		len=str.size();
		int mid;
		if(len%2==0)
			mid=len/2;
		else
			mid=(len+1)/2;
		for(int i=0;i<mid;i++){
			for(int j=mid;j<len;j++){
				if(str[i]==str[j]){
					str[j]='0';
					break;
				}
			}
		}
	int count=0;
	for(int i=mid;i<len;i++){
		if(str[i]!='0')
			count++;
	}
	if(count==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	}
	return 0;
}

