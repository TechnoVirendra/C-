#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int arr[26]={0};
	int len=(int)s.size();
	for(int i=0;i<len;i++){
		char x=s[i];
		int p=int(x);
		p-=97;
		arr[p]=1;
	}
	int n;
	cin>>n;
	while(n--){
		int count=0;
		string str;
		cin>>str;
		for(int i=0;i<str.size();i++){
			char j=str[i];
			int h=int(j);
			h-=97;
			if(arr[h]==0)
				count++;
			else
				count=count;
		}
		if(count>0)
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}
	return 0;
}
