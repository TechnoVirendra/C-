#include <iostream>
using namespace std;
void func(int a, int b,int x,int y){
    cin>>a>>b>>x>>y;
    cout<<(a*x)+(b*y)<<endl;
}
int main() {
	int a,b,x,y;
	func(a,b,x,y);
	return 0;
}
