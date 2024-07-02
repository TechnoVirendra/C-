#include <iostream>
#include <cmath>
using namespace std;
int fact(int n){
	int fact=1,i;
	for(i=1;i<=n;i++)
		fact*=i;
	return fact;
}

double sumsequence(int n,double x){
	int i,sign=-1;
	float sum=1;
	for(i=1;i<=n;i++){
		sum=sum+sign*pow(x,i)/fact(2*i-1);
		sign=sign*(-1);
	}
}
int main(){
	int n;
	double x;
	cin>>n>>x;
	cout<<sumsequence(n,x)<<endl;
	return 0;
}
