#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++){
            cin>>arr[i];
        }
        int sum = 0;
        sum +=arr[0];
        sum += arr[num-1];
        cout<<sum<<endl;
    }
    return 0;
}