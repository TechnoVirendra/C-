/*
If n is odd, print Weird
If n is even and in the inclusive range of  to 2 , 5 print Not Weird
If n is even and in the inclusive range of  to 6,20 print Weird
If n is even and greater than 20, print Not Weird.

input ------- output
3			weird
24			not weird
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%2!=0)
		cout<<"Weird";
	else if(n==2 && n<=5){
		if(n%2==0)
			cout<<"Not Weird";
		}
	else if(n>5 && n<=20){
		if(n%2==0)
			cout<<"Weird";
		}
	else{
		if(n%2==0 && n>20)
			cout<<"Not Weird";
		}
	return 0;
}
