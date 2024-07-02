#include"iostream"
using namespace std;
int main(){
	char n;
	char c;
	cin>>n;
	c=n;
	for(int i=n-(c-1);i<=c;i++){
		int num;
		num=n;
		cout<<num<<endl;
		n--;
	}
	return 0;
}
