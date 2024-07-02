#include<iostream>
using namespace std;
int main(){
	int p;
	float q;
	long r;
	double s;
	cin>>p>>q>>s>>r;
	long res;
	res=((100*(1-p*q))/(q+r))-(((p+r)/s)/long (s+p));
	cout<<res<<endl;
	return 0;
}
