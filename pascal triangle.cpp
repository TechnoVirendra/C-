#include<iostream>
using namespace std;
int fact(int n){
	int fact=1,i;
	for(i=2;i<=n;i++)
		fact*=i;
	return fact;
}
int main(){
	int n,i,j;
	cin>>n;
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++)
			cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
		cout<<endl;
	}
	return 0;
}

