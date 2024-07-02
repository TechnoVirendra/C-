#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float tip,tax;
	double tip_precent,tax_precent;
	double meta;
	cin>>meta;
	cin>>tip_precent;
	cin>>tax_precent;
	tip=(tip_precent * meta)/100;
	cout<<tip<<endl;
	tax=(tip_precent * tax_precent)/100;
	cout<<tax<<endl;
	double result=0;
	result = meta+tip+tax;
	cout<<round(result);
	return 0;
}
