#include<bits/stdc++.h>
using namespace std;

//not solved....

int GCD(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else if(a==b)
        return a;
    else if(a>b)
        return (a-b,b);
    return (a,b-a);
}

int LCM(int a,int b)
{
    return (a*b)/(GCD(a,b));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<GCD(a,b)<<"   "<<LCM(a,b)<<"\n";
    }
    return 0;
}