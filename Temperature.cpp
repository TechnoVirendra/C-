#include<iostream>
using namespace std;
int main(){
	int choice;
	float temp,conv_temp;
	cout<<"Temperature conversion Menu"<<endl;
	cout<<"1. Fahrenheit to celsius "<<endl;
	cout<<"2. celsius to Fahrenheit "<<endl;
	cout<<" 1 or 2 ="<<"\a";
	cin>>choice;
	cout<<"Enter Temperature : \a",cin>>temp;
	if(choice==1){
		conv_temp=(temp-32)/1.8;
		cout<<conv_temp<<endl;
	}
	else if(choice == 2){
		conv_temp=(1.8*temp)+32;
		cout<<conv_temp<<endl;
	}
	else
		cout<<"choice correct option !!!"<<endl;
	return 0;
}
