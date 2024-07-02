#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int delta,root1,root2,a,b,c;
	cin>>a>>b>>c;
	delta=b*b-4*a*c;
	if(delta>0){
		root1=(-b+sqrt(delta))/2*a;
		root2=(-b-sqrt(delta))/2*a;
	}
	else if(delta==0){
		delta=-b/2*a;
	}
	cout<<root1 <<" and "<<root2<<endl;
	return 0;
}
