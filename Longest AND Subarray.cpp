#include<iostream>
#include<climits>

/*  7 = 4
	but in this code 7 = 2. 
*/
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		if(num==1)
			cout<<"1\n";
		int result = 1;
		while(result * 2 <= num){
			result *= 2;
		}
		int ans = num-result-1;
		if(num==result)
			cout<<result/2<<endl;
		else
			cout<<max(ans,result/2)<<endl;
	}
	return 0;
}
