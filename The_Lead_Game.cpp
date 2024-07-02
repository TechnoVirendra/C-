#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> v,vect,ans;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(x);
        vect.push_back(y);
    }
    int sum1 = 0, sum2 =0;
    for(int i=0;i<n;i++)
    {
        int d;
        sum1 += v[i];
        sum2 += vect[i];
        d = abs(sum1-sum2);
        ans.push_back(d);
    }
    sort(ans.begin(),ans.end());
    int cnt;
    for (int  i = 0; i < n; i++)
    {
        if ((ans[n-1]==(v[i]-vect[i])) and (v[i]> vect[i]))
        {
            cnt = 1;
        }
        else if ((ans[n-1]==(vect[i]-v[i])) and (vect[i]> v[i]))
        {
            cnt = 2;
        }
        

        
    }
    
    return 0;
}