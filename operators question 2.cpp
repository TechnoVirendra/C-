#include"iostream"
#include"cmath"
using namespace std;
int main(){
	int x=2;long y=3;float w=4;double z=2;short p=4;long double q=2;
//	cin>>x>>y>>w>>z>>p>>q;
	short res;
	res=((2*x+3*y)/(5*w+6*z))+(8*p/5*q);
	cout<<res<<endl<<res*res*res*res<<endl<<pow(res,4)<<endl;
	return 0;
}
