#include"iostream"
#include"cmath"
using namespace std;
bool isprime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return false;
}
	return true;	
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		if(isprime(i))
		cout<<i<<endl;
	}
	return 0;
}
