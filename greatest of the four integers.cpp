#include <iostream>
using namespace std;
int Max_F(int a, int b, int c, int d){
	int max;
	if(a>b){
		if(a>c){
			if(a>d)
				max=a;
			else
				max=d;
		}
		else{
			if(c>d)
				max=c;
			else
				max=d;
		}
	}
	else{
		if(b>c){
			if(b>d)
				max=b;
			else
				max=d;
		}
		else{
			if(c>d)
				max=c;
			else
				max=d;
		}
	}
	return max;
}
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<Max_F(a,b,c,d);
	return 0;
}
