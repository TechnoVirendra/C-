#include<iostream>
using namespace std;
int main(){
	const int n=3;
	int arr[n],sum=0,avg;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	avg=sum/3;
	cout<<"Sum ="<<sum<<endl<<"Avg = "<<avg<<endl;
	return 0;
}
