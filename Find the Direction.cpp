#include<iostream>
using namespace std;
void func(int x){
	/*1 sec = East
	  2 sec = South
	  3 sec = West
	  4 sec = North
	*/
	if(x%4==0)
		cout<<"North\n";
	else if(x%4==2)
		cout<<"South\n";
	else if(x%4==3)
		cout<<"West\n";
	else
		cout<<"East"<<endl;
}
int main(){
	int t,x;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>x;
		func(x);
	}
	return 0;
}
