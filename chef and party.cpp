#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0; cin>>n;
        int arr[n],arr1[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr + n);
		
		for(int i=0;i<n;i+2){
			if(arr[i]==arr[i+1])
				cnt +=2;
		}
        cout<<cnt;
        
	}
	return 0;
}
        
