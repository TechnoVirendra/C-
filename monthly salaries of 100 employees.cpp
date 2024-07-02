#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n],i,s;
	int count=0;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++){
		int an_sal;
		an_sal=arr[i]*12;
		if(an_sal>= 100000)
		count+=1;
	}
	cout<<count<<endl;
	return 0;
}
