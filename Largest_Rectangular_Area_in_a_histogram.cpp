#include<bits/stdc++.h>
using namespace std;

void previousmaller(int *prev, int *nums, int n)
{
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        while (!st.empty() && nums[st.top()]>nums[i])  
        {
            st.pop();
        }
        prev[i] = (st.empty()?-1:st.top());
        st.push(i); 
    }
}

void Nextsmaller(int *next, int *nums, int n)
{
    stack<int> st;
    for(int i=n-1;i>=0;i--)
    {
        while (!st.empty() && nums[st.top()]>nums[i])  
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
        cin>>nums[i];
    int prev[n],next[n],area[n];
    previousmaller(prev,nums,n);
    Nextsmaller(next,nums,n);
    for(int i=0;i < n ;i++ )
    {
        if(prev[i]==-1)
            prev[i] = {-1,};
        else
            prev[i] = prev[i];   
    }
    for(int i=0;i < n ;i++ )
    {
        if(next[i]==-1)
            next[i] = {6,};
        else
            next[i] = next[i];   
    }
    int MaxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        area[i]=nums[i] + (i-prev[i]-1)*nums[i] + (next[i]-i-1)*nums[i];
    }
    for(int i=0; i < n; i++)
    {
        MaxNo = max(area[i],MaxNo);
    }
    cout<<MaxNo<<endl;
    return 0;
}