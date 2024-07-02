//write a program to find the max of three number using Array.
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
		cin>>arr[i];
	int max=0,m;
	for(i=0;i<n;i++){
		if(arr[i]<max)
			m=max;
		max=arr[i];
	}
	cout<<m<<endl;
	return 0;
}
