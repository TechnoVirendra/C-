#include <iostream>
using namespace std;
void func(int n){
    if(n%5==0 && n%11==0)
        cout<<"BOTH"<<endl;
    else if(n%5==0 || n%11==0)
        cout<<"ONE"<<endl;
    else
        cout<<"NONE"<<endl;
}
int main() {
	int n;
	cin>>n;
	func(n);
	return 0;
}

