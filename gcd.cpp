#include<iostream>
using namespace std;
int main(){
	int n1=81, n2= 153,m1,m2;
	
	int gcd=1;
//	for(int i=1;i<=n1 && i<=n2;i++){
//		if(n1%i==0 && n2%i==0)
//			gcd=i;
//	}
//	cout<<"gcd = "<<gcd<<endl;
	cin>>m1>>m2;
	for(int i=1;i<=m1 && i<=m2;i++){
		if(m1%i==0 && m2%i==0)
			gcd=i;
	}
	cout<<"gcd = "<<gcd<<endl;
	return 0;
}
