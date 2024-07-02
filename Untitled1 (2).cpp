#include<iostream>
using namespace std;
int main(){
	cout<<"Floyd's Triangle !!!"<<endl;
	int n,i,j,count=1;
	cin>>n;cout<<endl;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
	return 0;
}
