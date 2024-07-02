#include<bits/stdc++.h>
using namespace std;

void previouGreater(int *prev, int *nums, int n)
{
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        while (!st.empty() && nums[st.top()]<=nums[i])  
        {
            st.pop();
        }
        prev[i] = (st.empty()?-1:st.top());
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
    int prev[n];
    previouGreater(prev,nums,n);
    
    for(int i=0;i<n;i++)
    {
        if(prev[i]==-1)
            cout<<" -1 ";
        else
            cout<<nums[prev[i]]<<"  ";
    }
    cout<<"\n";
    return 0;
}