#include<iostream>
using namespace std;
int main(){
	int n,num,rev=0;
	cin>>n;
	num=n;
	while(n!=0){
		int l_d=n%10;
		rev=rev*10+l_d;
		n=n/10;
	}
	cout<<"number = "<<num<<endl<<"After reverse the number = "<<rev<<endl;
	return 0;
}
