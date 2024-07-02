#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,p;
        cin>>n>>c>>p;
        
        if(((3*c)-(n-c))>=p)
        {
            cout<<"PASS\n";
        }
        else
        {
            cout<<"FAIL\n";
        }

    }
    return 0;
}