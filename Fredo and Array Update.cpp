#include<iostream>
using namespace std;
int main(){
	int n,sum=0,m,i,c=1;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	for(i=0;i<sum;i++,c++){
		m=c*n;
		if(m > sum){
			cout<<c<<endl;
			break;
		}
	}
	return 0;
}
