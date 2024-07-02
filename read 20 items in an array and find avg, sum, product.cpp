#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0,product=1,avg;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
		product*=arr[i];
	}
	avg=sum/n;
	cout<<"Sum = "<<sum<<endl<<"Average = "<<avg<<endl<<"Product = "<<product<<endl;
	return 0;
}
