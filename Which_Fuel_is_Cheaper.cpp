#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y,k,d,p;
        cin>>x>>y>>a>>b>>k;
        p = x+a*k;
        d = y+b*k;
        if(p < d)
            cout<<"PETROL\n";
        else if(p > d)
            cout<<"DIESEL\n";
        else
            cout<<"SAME PRICE\n";
    }
    return 0;
}