#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x1,y1,x2,y2;
	cin>>x1>>x2>>y1>>y2;
	float d;
	d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	cout<<d;
	return 0;
}
