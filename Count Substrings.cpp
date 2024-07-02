#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		string str;
		cin>>str;
		int count=0;
		for(int i=0;i<str.size();i++){
			if(str[i]=='1')
				count++;
			else
				count=count;
		}
		int result;
		result = (count*(count+1))/2;
		cout<<result<<endl;
	}
	return 0;
}
