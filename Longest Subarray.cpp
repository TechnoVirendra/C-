#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int n,cnt=0,j=0,max=0;
		cin>>n;
		int arr[n];
		int tmp,flag=0;
		for(int i=0;i<n;i++){
			cin>>tmp;
			flag=0;
			if(tmp%2!=0){
				arr[j]=cnt;
				if(arr[j]>max)
					max=arr[j];
				j++;
				cnt=0;
				flag=1;
				
			}
			if(flag==0)
				cnt++;
		}
		if(tmp%2==0){
			if(cnt>max)
				max=cnt;
		}
		cout<<max<<"\n";
	}
	return 0;
}
