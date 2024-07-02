#include<iostream>
#include<cmath>
using namespace std;
int fact(int n){
	int fact=1;
	for(int i=2;i<=n;i++)
	fact*=i;
	return fact;
}
int sumfun(int n, int x){
	float r=0;
	for(int i=1;i<=n;i++){
		r+=(pow(x,i)/fact(2*i-1));
		
	}
	return r;
}
int main(){
	int n;
	int x;
	cout<<"Enter the number of term :";cin>>n;cout<<"Enter the value of x:";cin>>x;
	cout<<sumfun(n,x)<<endl;
	return 0;
}
