#include<bits/stdc++.h>
using namespace std;

void Nextsmaller(int *next, int *nums, int n)
{
    stack<int> st;
    for(int i=n-1;i>=0;i--)
    {
        while (!st.empty() && nums[st.top()]>=nums[i])  
        {
            st.pop();
        }
        next[i] = (st.empty()?-1:st.top());
        st.push(i); 
    }
}

int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i < n;i++)
    {
        cin>>nums[i];
    }
    int next[n];
    Nextsmaller(next,nums,n);
    for(int i=0;i<n;i++)
    {
        if(next[i]==-1)
            cout<<" -1 ";
        else
            cout<<nums[next[i]]<<"  ";
    }
    cout<<"\n";
    return 0;
}