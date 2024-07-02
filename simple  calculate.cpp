#include<iostream>
using namespace std;
class Base{
	public:
		int n,m;
	void calc(){
		cin>>n>>m;
		cout<<"Sum = "<<n+m<<endl<<"Sub = "<<n-m<<endl<<"produce = "<<n*m<<endl<<"Divide = "<<n/m<<endl;
	}
};
int main(){
	Base B;
	B.calc();
	return 0;
}
