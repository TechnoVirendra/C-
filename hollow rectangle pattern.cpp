#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=0;i<5;i++){
		for(j=1;j<5;j++){
		if(i==0 || i==4 || j==1 || j==4)
			cout<<"*";
		else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

