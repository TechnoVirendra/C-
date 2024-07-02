#include<iostream>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	float arr[n],total=0,average=1;
	for(i=0;i<n;i++){
		cin>>arr[i];
		total+=arr[i];
	}
	for(i=0;i<n;i++){
		cout<<"sales on day "<<i+1<<" "<<arr[i]<<endl;
	}
	cout<<"Total sales ="<<total<<endl;
	average=total/n;
	cout<<"Average of sales is "<<average<<endl;
	return 0;
}
