#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the "<<i+1<<" student marks : ";
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<i+1<<" student marks is = "<<arr[i]<<endl;
	}
	
	return 0;
}
