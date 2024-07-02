#include<iostream>
#include<cstring>
#include <iomanip>
using namespace std;
int main(){
	int i=4;
	double d=4.0;
	string s="HackerRank ";
	int i2;
	double d2;
	cin>>i2;
	cin>>d2;
	string str;
	cin.get();
	getline (cin, str);
	cout<<i+i2<<endl;
	cout<<std::fixed <<std::setprecision(1)<<d+d2<<endl<<s+str;
	return 0;
}
