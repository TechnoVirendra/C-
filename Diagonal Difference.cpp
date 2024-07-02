#include<iostream>
#include<cmath>
using namespace std;
 int main(){
 	int n;
 	cin>>n;
 	int arr[n][n];
 	int i,j,s1=0,s2=0,d;
 	for(i=0;i<n;i++){
 		for(j=0;j<n;j++){
 			cin>>arr[i][j];
 			if((i+j)%2==0)
 				s1 += arr[i][j];
 			else if((i+j)%3==0){
 				if((i+j)==6)
 					s2=s2;
 				else
 					s2 += arr[i][j];
 				
			 }
		 }
	 }
	 d=s1-s2;
	 cout<<abs(d)<<endl;
	 return 0;
 }
