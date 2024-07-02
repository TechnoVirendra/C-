#include<iostream>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int num;
		cin>>num;
		int arr[num];
		for(int i=0;i<num;i++)
			cin>>arr[i];
		int s=0,l=num-1;
		bool rain = true;
		if(arr[0]!=1)
			rain = false;
		while(s<l){
			if(arr[s] != arr[s + 1] && arr[s + 1] != arr[s]+ 1 ){
				rain = false;
				break;
			}
		
			if(arr[s] != arr[l]){
				rain = false;
				break;
			}
			l--;
			s++;
		}
		if(arr[s]!= 7)
			rain = false;
		if(rain)
			cout<<"yes\n";
		else
			cout<<"no\n";
		
	}
	return 0;
}
