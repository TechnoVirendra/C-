#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,a,b,c;
        cin>>s>>a>>b>>c;
        double r = s;
        r += r*c/100;
        if(r>=a && b>r)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}