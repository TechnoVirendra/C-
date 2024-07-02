#include<iostream>

using namespace std;

int main(){
	int t; 
	cin>>t;
	while(t--){
		int num; 
		cin>>num;
		string str1;
		cin>>str1;
		string str2;
		for(int i=0;i<num;i++){
			if(str1[i]!='.')
				str2 += str1[i];
		}
		bool result = true;
		if(str2.length()%2 != 0)
			result = false;
		else{
			for(int i=0; i<str2.length();i++){
				if(i%2==0){
					if(str2[i]== 'T')
						result = false;
				}
				else{
					if(str2[i]=='H')
						result = false;
				}
			}
		}
		if(result==true)
			cout<<"Valid"<<endl;
		else
			cout<<"Invalid"<<endl;
	}
	return 0;
}
