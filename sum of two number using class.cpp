#include<iostream>
using namespace std;
#include<cstring>
#include<climits>
class Base{
	public:
		int n,m;
	void sum(){
		cin>>n;
		cin>>m;
		cout<<(n+m)<<endl;
	}
};
int main(){
	Base B;
	B.sum();
	return 0;
}
