#include<bits/stdc++.h>
using namespace std;

void countDist(int arr[],int k,int size)
{
        unordered_map<int,int>store;
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            if(store.find(arr[i])==store.end())
                store[arr[i]]=1;
            else
                store[arr[i]]=store[arr[i]]+1;
        }
        ans.push_back(store.size());
        for(int i=k;i<size;i++)
        {
            if(store[arr[i-k]]==1)
                store.erase(arr[i-k]);
            else
                store[arr[i-k]]=store[arr[i-k]]-1;
            if(store.find(arr[i])!=store.end())
                store[arr[i]]=1;
            else
                store[arr[i]]=store[arr[i]]+1;
            ans.push_back(store.size());
        }
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0 ;i <n; i++)
        {
            cin >> arr[i];
        }
        int size = sizeof(arr) / sizeof(arr[0]); 
        countDist(arr, k, size);
    }
    return 0;

}