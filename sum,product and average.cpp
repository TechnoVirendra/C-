#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n],i,sum=0;
	float prod=1,aver=1;
	for(i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
		prod*=arr[i];
	}
	cout<<"sum of "<<n<<" items is "<<sum<<endl;
	cout<<"Product of "<<n<<" items is "<<prod<<endl;
	aver=sum/n;
	cout<<"Average of "<<n<<" items is "<<aver<<endl;
	return 0;
}
