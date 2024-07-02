#include<iostream>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		if((arr[i]%4==0) &&((arr[i]%400==0) || (arr[i]%100!=0)))
			cout<<"Leap year"<<endl;
		else
			cout<<"Not a Leap year"<<endl;
	}
	return 0;
}
