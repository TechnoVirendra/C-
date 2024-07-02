#include<iostream>
using namespace std;

int main(){
	int a[3],b[3];
	cin>>a[0]>>a[1]>>a[2];
	cin>>b[0]<<b[1]<<b[2];
	int al=0,bo=0;
	int i=2;
	while(i>=0){
		if(a[i]>b[i])
			al++;
		else if(a[i]<b[i])
			bo++;
		else{
			al=al;
			bo=bo;
		}
		i--;
	}
	cout<<al<<"	"<<bo<<endl;
	return 0;
	
}
