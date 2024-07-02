#include"iostream"
using namespace std;
int sum(int num){
	int add;
	add=(num*(num+1))/2;
	return add;
}
int main(){
	int n;
	cin>>n;
	cout<<sum(n)<<endl;
	return 0;
}

