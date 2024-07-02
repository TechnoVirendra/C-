#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

bool condSort(const pair<ll,ll> &x, const pair<ll,ll> &y)
{
    if(x.second == y.second)
        return (x.first < y.first);
    else
        return (x.second > y.second);
}

int main()
{
    ll n , i;
    cin>>n;
    ll arr[n];
    ll arr2[n];
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for( i=0;i<n;i++)
    {
        cin>>arr2[i];
    }

    vector <pair<ll,ll>> v;
    for(i=0;i<n;i++)
    {
        v.push_back (make_pair(arr[i],arr2[i]));
    }
    
    sort(v.begin(),v.end(),condSort);

    for(i=0;i<n;i++)
    {
        cout<<v[i].first <<"  "<<v[i].second<<"  ";
    }
    return 0;
}