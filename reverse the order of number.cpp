#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n],i;
	for(i=1;i<=n;i++){
		cin>>arr[i];		// input array.
	}						// 1 4 3 2 = 2 3 4 1
	for(i=n; i>=1; i--){
		cout<<arr[i]<<" ";
	}
	return 0;
}
