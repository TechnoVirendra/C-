#include"iostream"
#include<cmath>
using namespace std;
int main(){
	int n,sum=0,num;
	cin>>n;
	num=n;
	while(num>0){
		int lastdigit=num%10;
		sum+=pow(lastdigit,3);
		num/=10;
	}
	if(n==sum)
	cout<<"Armstrong Number"<<endl;
	else
	cout<<"Not Armstrong Number"<<endl;
	return 0;
}
