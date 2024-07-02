#include<bits/stdc++.h>
using namespace std;

long long int value(long long int x, long long int y)
{
    if(y == 0)
        return x;
    else
        return value(y , x%y);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long int a = value(n,k);
        int count = 0;
        count = n/a;
        cout<<count<<endl;
    }
    return 0;
}