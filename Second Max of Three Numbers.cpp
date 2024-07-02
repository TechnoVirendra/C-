#include<iostream>
#include<climits>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int arr[3],max=INT_MIN,s_max=INT_MAX;
		cin>>arr[0]>>arr[1]>>arr[2];
		for(int j=0;j<3;j++){
			if(arr[j]>max){
				s_max=max;
				max=arr[j];
			}
			else if(arr[j]>s_max)
				s_max=arr[j];
		}
		cout<<s_max<<endl;
	}
	return 0;
	
}
